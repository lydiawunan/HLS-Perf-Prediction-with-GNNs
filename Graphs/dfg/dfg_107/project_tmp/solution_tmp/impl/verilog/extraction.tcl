## ==============================================================
## Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
## Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
## ==============================================================
#----------------------------------------------------------------------------
# extract_clk_period_sdc
#
# Opens the .sdc file to extract the contraint clock period
#----------------------------------------------------------------------------
proc extract_clk_period_sdc {file_name {alt_file_name ""}} {
    if { ![file exists $file_name] } {
        if { [llength $alt_file_name] == 1 && [file exists [lindex $alt_file_name 0]] } {
            set file_name [lindex $alt_file_name 0]
        } else {
            error "Cannot find constraint file: $file_name"
        }
    }
    puts "Extracting clock period from $file_name"
    set report_file [open $file_name r]
    set report_buf [read -nonewline $report_file]
    close $report_file

    # pattern for parsing .sdc file.
    set prefix_sync {create_clock.*}
    set prefix_comb {set_max_delay\s+}
    set number {(\d+\.\d+)}
    set key {-period\s+}
    set clk_pattern_sync ${prefix_sync}${key}${number}
    set clk_pattern_comb ${prefix_comb}${number}
    if {[regexp $clk_pattern_sync $report_buf match actual]}  {
        return $actual
    } elseif {[regexp $clk_pattern_comb $report_buf match actual]}  {
        return $actual
    }
    return "NA"
}

#----------------------------------------------------------------------------
# extract_clk_period_ucf
#
# Opens the .ucf file to extract the constraint clock period
#----------------------------------------------------------------------------
proc extract_clk_period_ucf {file_name} {

    set report_file [open $file_name r]
    set report_buf [read -nonewline $report_file]
    close $report_file

    # pattern for parsing .ucf file.
    set prefix {TIMESPEC.*}
    set key_sync {PERIOD.*\s+}
    set key_comb {FROM\s+PADS\s+TO\s+PADS\s+}
    set number {(\d+\.\d+)}
    set clk_pattern_sync ${prefix}${key_sync}${number}
    set clk_pattern_comb ${prefix}${key_comb}${number}
    if {[regexp $clk_pattern_sync $report_buf match actual]}  {
        return $actual
    } elseif {[regexp $clk_pattern_comb $report_buf match actual]}  {
        return $actual
    }
    return "NA"
}

#----------------------------------------------------------------------------
# compile_reports_synxil
# dump  ${top_module}.rpt and  ${top_module}.result.rb for synplify flow
#----------------------------------------------------------------------------
proc compile_reports_synxil {top_module language} {
    set result_file [open ${top_module}.result w]
    dump_report_synxil $top_module $result_file
    close $result_file
    
    file mkdir ../report/${language}
    safe_move ${top_module}.result ../report/${language}/${top_module}_export.rpt
    
    set result_file [open ${top_module}.result.rb w]
    dump_report_rb_synxil $top_module $result_file
    close $result_file

    dump_report_synxil $top_module stdout
}

#----------------------------------------------------------------------------
# compile_reports_ise
# dump  ${top_module}.rpt and  ${top_module}.result.rb for ise flow
#----------------------------------------------------------------------------
proc compile_reports_ise {top_module language} {
    set result_file [open ${top_module}.result w]
    dump_report_ise $top_module $result_file
    close $result_file
    
    file mkdir ../report/${language}
    safe_move ${top_module}.result ../report/${language}/${top_module}_export.rpt
    
    set result_file [open ${top_module}.result.rb w]
    dump_report_rb_ise $top_module $result_file
    close $result_file

    # gen xml report
    set result_file [open ${top_module}.result.xml w]
    dump_report_xml_ise $top_module $result_file
    close $result_file

    # copy xml report
    safe_move ${top_module}.result.xml ../report/${language}/${top_module}_export.xml
    
    dump_report_ise $top_module stdout
}

#----------------------------------------------------------------------------
# extract_area_ise
#
# Open the ise flow report files to extract timing and resouce used in the design
#----------------------------------------------------------------------------
proc extract_area_ise {file_name file_name1 file_name2} {

    # ${module}_usage.xml 
    set report_file [open $file_name r]
    set report_buf [read -nonewline $report_file]
    close $report_file
  
    # ${module}.par
    set report_file1 [open $file_name1 r]
    set report_buf1 [read -nonewline $report_file1]
    close $report_file1
  
    # ${module}_map.mrp
    set report_file2 [open $file_name2 r]
    set report_buf2 [read -nonewline $report_file2]
    close $report_file2

    ################################################################################
    # patterns for parsing _usg.xml.
    ################################################################################
    # SLICE pattern
    set slice_pattern {.*PK_NUM_SLICES.+?value=\"(\d+)\".*}
    set slice_pattern_v2p {.*NUM_SLICE.+?value=\"(\d+)\".*}
    set slice_pattern_v5 {.*AGG_SLICE.+?value=\"(\d+)\".*}
    set slice_pattern_101 {.*\"NUM_SLICE\".+?value=\"(\d+)\".*}
    
    # LUT pattern
    set lut_pattern {.*PK_NUM_4_INPUT_LUTS.+?value=\"(\d+)\".*}
    set lut_pattern_v2p {.*NUM_4_INPUT_LUT.+?value=\"(\d+)\".*}
    set lut_part1 {.*NUM_BSFULL.+?value=\"(\d+)\".*}
    set lut_part2 {.*NUM_BSLUTONLY.+?value=\"(\d+)\".*}
    set lut_pattern_v5_backup {.*NUM_LOGIC_O6ONLY.+?value=\"(\d+)\".*}
     
    # FF pattern
    set ff_pattern {.*PK_NUM_SLICE_FFS.+?value=\"(\d+)\".*}
    set ff_pattern_v5 {.*NUM_SLICE_FF.+?value=\"(\d+)\".*}        

    # MULT18/DSP48 pattern
    set mult18_pattern {.*PK_NUM_XV2_MULTS.+?value=\"(\d+)\".*}
    set mult18_pattern_101 {.*NUM_MULT18X18.+?value=\"(\d+)\".*}
    set dsp48_pattern_v4 {.*PK_NUM_xv4_DSP48.+?value=\"(\d+)\".*}
    set dsp48_pattern_v4_101 {.*NUM_DSP48.+?value=\"(\d+)\".*}
    set dsp48_pattern_v5 {.*NUM_DSP48E.+?value=\"(\d+)\".*}
   
    # BRAM pattern
    set bram_pattern_v2p {.*Number of BRAMs: +(\d+).*}
    set bram_pattern_s3_s6_v4 {.*NUM_RAMB16.+?value=\"(\d+)\".*}
    set bram_pattern_s6_9k {.*NUM_RAMB8BWER.+?value=\"(\d+)\".*}
    set bram_pattern_v5_18k {.*NUM_RAMB18X2.+?value=\"(\d+)\".*}
    set bram_pattern_v5_18k_upper {.*NUM_RAMB18X2_UPPER.+?value=\"(\d+)\".*}
    set bram_pattern_v5_18k_lower {.*NUM_RAMB18X2_LOWER.+?value=\"(\d+)\".*}
    set bram_pattern_v5_18k_sdp_upper {.*NUM_RAMB18X2SDP_UPPER.+?value=\"(\d+)\".*}
    set bram_pattern_v5_18k_sdp_lower {.*NUM_RAMB18X2SDP_LOWER.+?value=\"(\d+)\".*}
    set bram_pattern_v5_36k {.*NUM_RAMB36_EXP.+?value=\"(\d+)\".*}
    set bram_pattern_v6_18k {.*NUM_RAMB18E1.+?value=\"(\d+)\".*}
    set bram_pattern_v6_36k {.*NUM_RAMB36E1.+?value=\"(\d+)\".*}
    
    # LATCH pattern
    set latch_pattern {.*Number used as Latches +(\d+).*}
    
    # SRL pattern
    # s3, v4
    set srl_pattern_s3 {.*Number used as Shift registers: +(\d+).*}
    # s6, v5, v6, v7
    set srl_pattern_s6 {.*Number used as Shift Register: +(\d+).*}
    
    # Init resource counters
    set slice_count 0
    set lut_count 0
    set ff_count 0
    set mult_count 0 
    set bram_count 0
    set latch_count 0
    set srl_count 0

    # SLICE extraction
    if {![regexp $slice_pattern $report_buf match_slice slice_count] && \
        ![regexp $slice_pattern_v5 $report_buf match_slice slice_count] && \
        ![regexp $slice_pattern_101 $report_buf match_slice slice_count] && \
        ![regexp $slice_pattern_v2p $report_buf match_slice slice_count] } {
        set slice_count 0
    } 
            
    # LUT extraction
    if {![regexp $lut_pattern $report_buf match_lut lut_count] && \
        ![regexp $lut_pattern_v2p $report_buf match_lut lut_count]} {
        if {[regexp $lut_part2 $report_buf match_lut lut_count1] && [regexp $lut_part1 $report_buf match_lut lut_count2] } {
            set lut_count [expr $lut_count1+ $lut_count2]
        } elseif {[regexp $lut_part2 $report_buf match_lut lut_count1] && ![regexp $lut_part1 $report_buf match_lut lut_count2]} {
            set lut_count [expr $lut_count1]
        } elseif {![regexp $lut_part2 $report_buf match_lut lut_count1] && [regexp $lut_part1 $report_buf match_lut lut_count2]} {
            set lut_count [expr $lut_count2]
        } elseif { ![regexp $lut_pattern_v5_backup $report_buf match_lut lut_count] } {
            set lut_count 0
        }
    }
 
    # FF extraction
    if {![regexp $ff_pattern $report_buf match_ff ff_count] && \
        ![regexp $ff_pattern_v5 $report_buf match_ff ff_count]} {
        set ff_count 0
    }    
    
    # DSP extraction
    if {![regexp $mult18_pattern $report_buf match_dsp mult_count] && \
        ![regexp $mult18_pattern_101 $report_buf match_dsp mult_count] && \
        ![regexp $dsp48_pattern_v4 $report_buf match_dsp mult_count] && \
        ![regexp $dsp48_pattern_v4_101 $report_buf match_dsp mult_count] && \
        ![regexp $dsp48_pattern_v5 $report_buf match_dsp mult_count]} {
        set mult_count 0
    }
   
    # BRAM extraction
    if {[regexp $bram_pattern_s3_s6_v4 $report_buf match_bram bram_count_18k] && [regexp $bram_pattern_s6_9k $report_buf match_bram bram_count_9k]} {
        set bram_count [expr $bram_count_18k + $bram_count_9k]
    } elseif {![regexp $bram_pattern_s3_s6_v4 $report_buf match_bram bram_count_18k] && [regexp $bram_pattern_s6_9k $report_buf match_bram bram_count_9k]} {
        set bram_count $bram_count_9k
    } elseif {[regexp $bram_pattern_s3_s6_v4 $report_buf match_bram bram_count_18k] && ![regexp $bram_pattern_s6_9k $report_buf match_bram bram_count_9k]} {
        set bram_count $bram_count_18k
    } else {
        if {[regexp $bram_pattern_v6_18k $report_buf match_bram bram_count_18k] && [regexp $bram_pattern_v6_36k $report_buf match_bram bram_count_36k]} {
            set bram_count [expr $bram_count_18k + 2*$bram_count_36k]
        } elseif {[regexp $bram_pattern_v6_18k $report_buf match_bram bram_count_18k] && ![regexp $bram_pattern_v6_36k $report_buf match_bram bram_count_36k]} {
            set bram_count $bram_count_18k
        } elseif {![regexp $bram_pattern_v6_18k $report_buf match_bram bram_count_18k] && [regexp $bram_pattern_v6_36k $report_buf match_bram bram_count_36k]} {
            set bram_count [expr 2*$bram_count_36k]
        } else {
            if {[regexp $bram_pattern_v5_18k $report_buf match_bram bram_count_18k] && [regexp $bram_pattern_v5_36k $report_buf match_bram bram_count_36k]} {
                if {[regexp $bram_pattern_v5_18k_upper $report_buf match_bram bram_count_18k_upper] && [regexp $bram_pattern_v5_18k_lower $report_buf match_bram bram_count_18k_lower]} {
                    if {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_sdp_lower + $bram_count_18k_upper + $bram_count_18k_lower + 2*$bram_count_36k]
                    } elseif {![regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_lower + $bram_count_18k_upper + $bram_count_18k_lower + 2*$bram_count_36k]
                    } elseif {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && ![regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_upper + $bram_count_18k_lower + 2*$bram_count_36k]
                    } else {
                        set bram_count [expr $bram_count_18k_upper + $bram_count_18k_lower + 2*$bram_count_36k]
                    }
                } elseif {![regexp $bram_pattern_v5_18k_upper $report_buf match_bram bram_count_18k_upper] && [regexp $bram_pattern_v5_18k_lower $report_buf match_bram bram_count_18k_lower]} {
                    if {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_sdp_lower + $bram_count_18k_lower + 2*$bram_count_36k]
                    } elseif {![regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_lower + $bram_count_18k_lower + 2*$bram_count_36k]
                    } elseif {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && ![regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_lower + 2*$bram_count_36k]
                    } else {
                        set bram_count [expr $bram_count_18k_lower + 2*$bram_count_36k]
                    }
                } elseif {[regexp $bram_pattern_v5_18k_upper $report_buf match_bram bram_count_18k_upper] && ![regexp $bram_pattern_v5_18k_lower $report_buf match_bram bram_count_18k_lower]} {
                    if {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_sdp_lower + $bram_count_18k_upper + 2*$bram_count_36k]
                    } elseif {![regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_lower + $bram_count_18k_upper + 2*$bram_count_36k]
                    } elseif {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && ![regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_upper + 2*$bram_count_36k]
                    } else {
                        set bram_count [expr $bram_count_18k_upper + 2*$bram_count_36k]
                    }
                } else {
                    set bram_count [expr 2*$bram_count_36k]
                }
            } elseif {[regexp $bram_pattern_v5_18k $report_buf match_bram bram_count_18k] && ![regexp $bram_pattern_v5_36k $report_buf match_bram bram_count_36k]} {
                if {[regexp $bram_pattern_v5_18k_upper $report_buf match_bram bram_count_18k_upper] && [regexp $bram_pattern_v5_18k_lower $report_buf match_bram bram_count_18k_lower]} {
                    if {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_sdp_lower + $bram_count_18k_upper + $bram_count_18k_lower]
                    } elseif {![regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_lower + $bram_count_18k_upper + $bram_count_18k_lower]
                    } elseif {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && ![regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_upper + $bram_count_18k_lower]
                    } else {
                        set bram_count [expr $bram_count_18k_upper + $bram_count_18k_lower]
                    }
                } elseif {![regexp $bram_pattern_v5_18k_upper $report_buf match_bram bram_count_18k_upper] && [regexp $bram_pattern_v5_18k_lower $report_buf match_bram bram_count_18k_lower]} {
                    if {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_sdp_lower + $bram_count_18k_lower]
                    } elseif {![regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_lower + $bram_count_18k_lower]
                    } elseif {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && ![regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_lower]
                    } else {
                        set bram_count [expr $bram_count_18k_lower]
                    }
                } elseif {[regexp $bram_pattern_v5_18k_upper $report_buf match_bram bram_count_18k_upper] && ![regexp $bram_pattern_v5_18k_lower $report_buf match_bram bram_count_18k_lower]} {
                    if {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_sdp_lower + $bram_count_18k_upper]
                    } elseif {![regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && [regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_lower + $bram_count_18k_upper]
                    } elseif {[regexp $bram_pattern_v5_18k_sdp_upper $report_buf match_bram bram_count_18k_sdp_upper] && ![regexp $bram_pattern_v5_18k_sdp_lower $report_buf match_bram bram_count_18k_sdp_lower]} {
                        set bram_count [expr $bram_count_18k_sdp_upper + $bram_count_18k_upper]
                    } else {
                        set bram_count [expr $bram_count_18k_upper]
                    }
                } else {
                    set bram_count 0
                }
            } elseif {![regexp $bram_pattern_v5_18k $report_buf match_bram bram_count_18k] && [regexp $bram_pattern_v5_36k $report_buf match_bram bram_count_36k]} {
                set bram_count [expr 2*$bram_count_36k]
            } else {
                set bram_count 0
            }
        }
    }

    if {![regexp $latch_pattern $report_buf1 match_latch latch_count]} {
        set latch_count 0
    }

    if {![regexp $srl_pattern_s3 $report_buf2 match_srl srl_count] && \
        ![regexp $srl_pattern_s6 $report_buf2 match_srl srl_count]} {
        set srl_count 0
    }

    set return_value [list $slice_count $lut_count $ff_count $mult_count $bram_count $latch_count $srl_count]
    return $return_value
}

#----------------------------------------------------------------------------
# extract_area_total_ise
#
# Opens the .par and .syr file to extract available resources
#----------------------------------------------------------------------------
proc extract_area_total_ise {module} {
    set s ""
    # read .par
    if {[file isfile ${module}.par]} {
        set f [open ${module}.par r]
        append s [read $f]
        close $f
    }
    # read .syr
    if {[file isfile ${module}.syr]} {
        set f [open ${module}.syr r]
        append s [read $f]
        close $f
    }
    # patterns
    set task {
        slice {
            {(?n)Number of occupied Slices.*out of\s+([0-9,]+)}     {$value}
            {(?n)Number of Slices.*out of\s+([0-9,]+)}              {$value}
        }
        lut {
            {(?n)Number of Slice LUTs.*out of\s+([0-9,]+)}          {$value}
            {(?n)Number of 4 input LUTs.*out of\s+([0-9,]+)}        {$value}
        }
        ff {
            {(?n)Number of Slice Registers.*out of\s+([0-9,]+)}     {$value}
            {(?n)Number of Slice Flip Flops.*out of\s+([0-9,]+)}    {$value}
        }
        dsp {
            {(?n)Number of (?:DSP|MULT).*out of\s+([0-9,]+)}        {$value}
        }
        bram {
            {(?n)Number of RAMB18X2.*out of\s+([0-9,]+)}            {$value*2}
            {(?n)Number of RAMB(?:16|18).*out of\s+([0-9,]+)}       {$value}
            {(?n)Number of RAMB36.*out of\s+([0-9,]+)}              {$value*2}
        }
    }
    # extract values
    set ret ""
    foreach {item rules} $task {
        set match 0
        foreach {pat expression} $rules {
            if {[regexp $pat $s m value]} {
                set match 1
                set value [string map {, ""} $value]
                set value [expr $expression]
                break
            }
        }
        if {!$match} {
            set value "NA"
        }
        lappend ret $value
    }
    return $ret
}

#----------------------------------------------------------------------------
# extract_timing_from_twr_ise
#
# Opens the .twr file to extract the actual timing delay value
#----------------------------------------------------------------------------
proc extract_timing_from_twr_ise {file_name} {

    set report_file [open $file_name r]
    set report_buf [read -nonewline $report_file]
    close $report_file

    # pattern for parsing .twr file.
    set prefix {.*}
    set number {.*?(\d+\.\d+)ns}
    set key_sync "Minimum period:"
    set key_comb "Maximum path delay"
    set clk_pattern_sync ${prefix}${key_sync}${number}
    set clk_pattern_comb ${prefix}${key_comb}${number}
    if {[regexp $clk_pattern_sync $report_buf match actual]}  {
        return $actual
    } elseif {[regexp $clk_pattern_comb $report_buf match actual]}  {
        return $actual
    }
    
    return "NA"
}      

#----------------------------------------------------------------------------
# dump_report_synxil
#
# Generate report for synplify flow
#----------------------------------------------------------------------------
proc dump_report_synxil { module out } {

    set fl [open rev_syn/${module}.srr r]
    set report_buf [read -nonewline $fl]
    close $fl
    set ver_pattern {^#Build: (Synplify|Synplify Pro) +(\S+) .*}
    if {![regexp $ver_pattern $report_buf match_ver match_name ver]} {
        set ver UNKNOWN
    }
    if {![string equal -nocase $ver "UNKNOWN"] } {
        set ver [string range $ver 0 end-1]
    }
  
    set dev_pattern {.*Mapping to part: (\S+)\n.*}

    if {![regexp $dev_pattern $report_buf match_dev device]} {
        set device UNKNOWN
    } else {
        set dev_list [split $device "-"]
        set dev [lindex $dev_list 0]
        set dev "$dev[lindex $dev_list 2]-[lindex $dev_list 1]"
    }      

    set date [clock format [clock seconds]]

    ## Report area ###

    set area_results [extract_area_ise ${module}_usage.xml ${module}.par ${module}_map.mrp]
    puts $out ""
    puts $out ""
    puts $out "Implementation tool: $match_name $ver"
    puts $out "Device target:       $dev"
    puts $out "Report date:         $date"
    puts $out ""
    puts $out ""

    set x1 [format "%-10s %8d" SLICE: [lindex $area_results 0]]
    set x2 [format "%-10s %8d" LUT: [lindex $area_results 1]]
    set x3 [format "%-10s %8d" FF: [lindex $area_results 2]]
    set x4 [format "%-10s %8d" DSP: [lindex $area_results 3]]
    set x5 [format "%-10s %8d" BRAM: [lindex $area_results 4]]
    set x7 [format "%-10s %8d" SRL: [lindex $area_results 6]]
    set sdc_file [glob -nocomplain *.sdc]
    set t2 [format "%2.3f" [extract_clk_period_sdc $sdc_file]]
    set t1_tmp [extract_timing_from_twr_ise ${module}.twr]
    if {$t1_tmp == "NA"} {
        set t1 $t1_tmp
    } else {
        set t1 [format "%2.3f" $t1_tmp]
    }

    puts $out "#=== Resource usage ==="
    puts $out "$x1"
    puts $out "$x2"
    puts $out "$x3"
    puts $out "$x4"
    puts $out "$x5"
    puts $out "$x7"
    if {[lindex $area_results 5] != 0} {
        set x6 [format "%-10s %8d" LATCH: [lindex $area_results 5]]
        puts $out "$x6"
    }
    ## Report timing ###
    puts $out "#=== Final timing ==="
    puts $out "CP required:    $t2"
    puts $out "CP achieved:    $t1"
    if {$t1 == "NA"} {
        puts $out "No Sequential Path"
    } else {
        if {[expr $t1 <= $t2]} {
            puts $out "Timing met"
        } else {
            puts $out "Timing not met"
        }
    }
}


## extract target clock from rpt file
proc extract_target_from_timing_report {report_file xdc_file} {
    set t2 "NA"
    set fl [open $report_file r]
    set report_buf [read -nonewline $fl]
    close $fl
    set clk_pattern {.*?Requirement: +(\d+\.\d+)ns.*}
    if {![regexp $clk_pattern $report_buf match_clk t2]} {
        set t2 [format "%2.3f" [extract_clk_period_sdc $xdc_file [glob -nocomplain *.xdc]]]
    }
    return $t2
}

## extract target clock from rpt file 
proc extract_target_from_timing_summary {report_file xdc_file {clock_name "ap_clk"}} {
    set t2 "NA"
    set fl [open $report_file r]
    set report_buf [read -nonewline $fl]
    close $fl
    set clk_pattern "Path\\s+Group:\\s+${clock_name}.*?Requirement:\\s+(\\d+\\.\\d+)ns.*?"
    if {![regexp $clk_pattern $report_buf match_clk t2]} {
        #puts "DEBUG: using the old way to extract target clock"
        set t2 [format "%2.3f" [extract_clk_period_sdc $xdc_file [glob -nocomplain *.xdc]]]
    }
    #puts "DEBUG: matched clk is $t2"
    return $t2
}

## extract target clock from twr file
proc extract_target_clock_twr {module} {
    set t2 "NA"
    set fl [open ./${module}.twr r]
    set report_buf [read -nonewline $fl]
    close $fl
    set clk_pattern {.*?Requirement: +(\d+\.\d+)ns.*}
    if {![regexp $clk_pattern $report_buf match_clk t2]} {
        set t2 [format "%2.3f" [extract_clk_period_ucf ${module}.ucf]]
    }
    return $t2
}

#----------------------------------------------------------------------------
# dump_report_ise
#
# Generate report for ISE flow
#----------------------------------------------------------------------------
proc dump_report_ise { module out } {

    set fl [open ${module}.syr r]
    set report_buf [read -nonewline $fl]
    close $fl
    set ver_pattern {.*Release +(\S+) .*}
    if {![regexp $ver_pattern $report_buf match_ver ver]} {
        set ver UNKNOWN
    }
    
    set dev_pattern {.*Target Device +: (\S+)\n.*}

    if {![regexp $dev_pattern $report_buf match_dev device]} {
        set device UNKNOWN
    } else {
        set dev_list [split $device "-"]
        set dev [lindex $dev_list 0]
        set dev "$dev[lindex $dev_list 2]-[lindex $dev_list 1]"
    }      

    set date [clock format [clock seconds]]

    ## Report area ###

    set area_results [extract_area_ise ${module}_usage.xml ${module}.par ${module}_map.mrp]
    puts $out ""
    puts $out ""
    puts $out "Implementation tool: Xilinx ISE$ver"
    puts $out "Device target:       $dev"
    puts $out "Report date:         $date"
    puts $out ""
    puts $out ""

    set x1 [format "%-10s %8d" SLICE: [lindex $area_results 0]]
    set x2 [format "%-10s %8d" LUT: [lindex $area_results 1]]
    set x3 [format "%-10s %8d" FF: [lindex $area_results 2]]
    set x4 [format "%-10s %8d" DSP: [lindex $area_results 3]]
    set x5 [format "%-10s %8d" BRAM: [lindex $area_results 4]]
    set x7 [format "%-10s %8d" SRL: [lindex $area_results 6]]
    set t2 [extract_target_clock_twr $module]
    set t1_tmp [extract_timing_from_twr_ise ${module}.twr]
    if {$t1_tmp == "NA"} {
        set t1 $t1_tmp
    } else {
        set t1 [format "%2.3f" $t1_tmp]
    }

    puts $out "#=== Resource usage ==="
    puts $out "$x1"
    puts $out "$x2"
    puts $out "$x3"
    puts $out "$x4"
    puts $out "$x5"
    puts $out "$x7"
    if {[lindex $area_results 5] != 0} {
        set x6 [format "%-10s %8d" LATCH: [lindex $area_results 5]]
        puts $out "$x6"
    }
    ## Report timing ###
    puts $out "#=== Final timing ==="
    puts $out "CP required:    $t2"
    puts $out "CP achieved:    $t1"
    if {$t1 == "NA"} {
        puts $out "No Sequential Path"
    } else {
        if {[expr $t1 <= $t2]} {
            puts $out "Timing met"
        } else {
            puts $out "Timing not met"
        }
    }
}

#----------------------------------------------------------------------------
# dump_report_rb_synxil
#
# Generate ruby report for synplify flow
#----------------------------------------------------------------------------
proc dump_report_rb_synxil { module out } {
    set area_results [extract_area_ise ${module}_usage.xml ${module}.par ${module}_map.mrp]
    set t2 [format "%2.3f" [extract_clk_period_sdc [glob -nocomplain *.sdc]]]

    puts $out "\$Footmark = \"FPGA_Xilinx\""
    puts $out "\$Description = \"by ISE\""
    puts $out ""
    puts $out ""

    puts $out "#=== Resource usage ==="
    puts $out "\$SLICE = \"[lindex $area_results 0]\""
    puts $out "\$LUT = \"[lindex $area_results 1]\""
    puts $out "\$FF = \"[lindex $area_results 2]\""
    puts $out "\$DSP = \"[lindex $area_results 3]\""
    puts $out "\$BRAM =\"[lindex $area_results 4]\""
    puts $out "\$SRL =\"[lindex $area_results 6]\""

    ## Report timing ###
    puts $out "#=== Final timing ==="
    set t1_tmp [extract_timing_from_twr_ise ${module}.twr]
    if {$t1_tmp == "NA"} {
        set t1 $t1_tmp
    } else {
        set t1 [format "%2.3f" $t1_tmp]
    }
    puts $out "\$TargetCP = \"$t2\""
    puts $out "\$CP = \"$t1\""
}

#----------------------------------------------------------------------------
# dump_report_rb_ise
#
# Generate ruby report for ISE flow
#----------------------------------------------------------------------------
proc dump_report_rb_ise { module out } {

    ## Report area ###

    set area_results [extract_area_ise ${module}_usage.xml ${module}.par ${module}_map.mrp]
    puts $out "\$Footmark = \"FPGA_Xilinx\""
    puts $out "\$Description = \"by ISE\""
    puts $out ""
    puts $out ""

    puts $out "#=== Resource usage ==="
    puts $out "\$SLICE = \"[lindex $area_results 0]\""
    puts $out "\$LUT = \"[lindex $area_results 1]\""
    puts $out "\$FF = \"[lindex $area_results 2]\""
    puts $out "\$DSP = \"[lindex $area_results 3]\""
    puts $out "\$BRAM =\"[lindex $area_results 4]\""
    puts $out "\$SRL =\"[lindex $area_results 6]\""

    ## Report timing ###
    puts $out "#=== Final timing ==="
    set t2 [extract_target_clock_twr $module]
    set t1_tmp [extract_timing_from_twr_ise ${module}.twr]
    if {$t1_tmp == "NA"} {
        set t1 $t1_tmp
    } else {
        set t1 [format "%2.3f" $t1_tmp]
    }
    puts $out "\$TargetCP = \"$t2\""
    puts $out "\$CP = \"$t1\""
}

#----------------------------------------------------------------------------
# dump_report_xml_ise
#
# Generate xml report
#----------------------------------------------------------------------------
proc dump_report_xml_ise { module out } {
    # collect data
    set area_results [extract_area_ise ${module}_usage.xml ${module}.par ${module}_map.mrp]
    set slice [lindex $area_results 0]
    set lut   [lindex $area_results 1]
    set ff    [lindex $area_results 2]
    set dsp   [lindex $area_results 3]
    set bram  [lindex $area_results 4]
    set srl   [lindex $area_results 6]
    set area_total [extract_area_total_ise $module]
    set t_slice [lindex $area_total 0]
    set t_lut   [lindex $area_total 1]
    set t_ff    [lindex $area_total 2]
    set t_dsp   [lindex $area_total 3]
    set t_bram  [lindex $area_total 4]
    set targetcp [extract_target_clock_twr $module]
    set t1_tmp [extract_timing_from_twr_ise ${module}.twr]
    if {$t1_tmp == "NA"} {
        set achievedcp $t1_tmp
    } else {
        set achievedcp [format "%.3f" $t1_tmp]
    }
    # dump xml
    puts $out "<profile>"
    puts $out ""
    puts $out "<AreaReport>"
    puts $out "<Resources>"
    puts $out "<SLICE>$slice</SLICE>"
    puts $out "<LUT>$lut</LUT>"
    puts $out "<FF>$ff</FF>"
    puts $out "<DSP>$dsp</DSP>"
    puts $out "<BRAM>$bram</BRAM>"
    puts $out "<SRL>$srl</SRL>"
    puts $out "</Resources>"
    puts $out "<AvailableResources>"
    puts $out "<SLICE>$t_slice</SLICE>"
    puts $out "<LUT>$t_lut</LUT>"
    puts $out "<FF>$t_ff</FF>"
    puts $out "<DSP>$t_dsp</DSP>"
    puts $out "<BRAM>$t_bram</BRAM>"
    puts $out "</AvailableResources>"
    puts $out "</AreaReport>"
    puts $out ""
    puts $out "<TimingReport>"
    puts $out "<TargetClockPeriod>$targetcp</TargetClockPeriod>"
    puts $out "<AchievedClockPeriod>$achievedcp</AchievedClockPeriod>"
    puts $out "</TimingReport>"
    puts $out ""
    puts $out "</profile>"
}

proc safe_move { src dst} {
    if { ![file exists $src] } {
        return
    }
    if { [file isdirectory [file dir $dst]] } {
        file copy -force $src $dst
        puts "HLS EXTRACTION: generated [file normalize $dst]"
        file delete -force $src
    } else {
        puts "HLS EXTRACTION: generated [file normalize $src]"
    }
}

proc invoke_coregen { {lang ""} } {
    if { $lang == "" } {
        set lang [file tail [pwd]]
    }

    set ext ".vhd"
    if { [string equal -nocase $lang "verilog"] } {
        set ext ".v"
    }

    set xco_files [glob -nocomplain *.xco]
    set coe_files [glob -nocomplain *.coe]

    if { [llength $xco_files] == 0 } {
        return
    }

    set path [pwd]
    if {[string match *\.* $path]} {
        #puts "@W \[IMPL-253\] CoreGen currently could fail if there is a '.' in part of the path name, temporarily change the offending directory name by replacing '.' with '_'."
        ::AESL_AUTOIMPLMSG::autoimplmsg_warn253
    }

    set coregen_dir "ap_coregen"
    while {[file exists $coregen_dir] && ![file isdir $coregen_dir]} {
        append coregen_dir "_"
    }
    file delete -force $coregen_dir
    file mkdir $coregen_dir
    foreach f [concat $xco_files $coe_files] {
        file copy -force $f $coregen_dir
    }

    # Enter coregen dir
    cd $coregen_dir

    # Generate an empty coregen project
    set project "project.cgp"
    close [open $project w]

    foreach xco_file $xco_files {
        puts "Generating IP ($xco_file) ..."
        if {[catch {exec coregen -b $xco_file -p $project -intstyle silent >& log} err_msg]} {
            puts stderr "Could not complete coregen: $err_msg\n" 
            exit 1
        } else {
            puts stderr "$err_msg\n"
            puts "Done"
            puts ""
            set ip_name [file root [file tail $xco_file]]
            set rtl_file ${ip_name}${ext}
            set ngc_file ${ip_name}.ngc
            set mif_file ${ip_name}.mif
            if {![file isfile $rtl_file] || ![file isfile $ngc_file]} {
                #puts "@E \[IMPL-254\] IP generation did not complete as expected."
                ::AESL_AUTOIMPLMSG::autoimplmsg_err254
                exit 1
            } else {
                file copy -force $rtl_file ..
                file copy -force $ngc_file ..
                if {[file isfile $mif_file]} {
                    file copy -force $mif_file ..
                }
            }
        }
    }

    # Go back
    cd ..
}

#----------------------------------------------------------------------------
# compile_reports_vivado
# dump  ${basename}.rpt and  ${basename}.result.rb for Rodin flow
#----------------------------------------------------------------------------
proc compile_reports_vivado {has_impl target_clk_period reportdir basename outdir device project solution {clock_name ""}} {
    if { $clock_name eq "" } {
        set clock_name "ap_clk"
    }
    if { $has_impl } {
        set vivado_ver   [get_vivado_version           ./$reportdir/${basename}_timing_routed.rpt]
        set timing_route [extract_from_timing_summary  ./$reportdir/${basename}_timing_routed.rpt $clock_name clk_target $target_clk_period]
        set timing_synth [extract_from_timing_summary  ./$reportdir/${basename}_timing_synth.rpt $clock_name]
        #set timing_synth [extract_from_timing_report        ./report/${basename}_timing_paths_synth.rpt]
        extract_from_utilization                       ./$reportdir/${basename}_utilization_routed.rpt area_current area_total
        set timing_final $timing_route
        puts "HLS EXTRACTION: impl area_totals:  $area_total"
        puts "HLS EXTRACTION: impl area_current: $area_current"
    } else {
        set vivado_ver   [get_vivado_version           ./$reportdir/${basename}_timing_synth.rpt]
        set timing_synth [extract_from_timing_summary  ./$reportdir/${basename}_timing_synth.rpt $clock_name clk_target $target_clk_period]
        #set vivado_ver   [get_vivado_version                 ./report/${basename}_timing_paths_synth.rpt]
        #set clk_target   [extract_target_from_timing_report  ./report/${basename}_timing_paths_synth.rpt ./${basename}.xdc]
        #set timing_synth [extract_from_timing_report         ./report/${basename}_timing_paths_synth.rpt]
        extract_from_utilization                       ./$reportdir/${basename}_utilization_synth.rpt area_current area_total
        set timing_route ""
        set timing_final $timing_synth
        puts "HLS EXTRACTION: synth area_totals:  $area_total"
        puts "HLS EXTRACTION: synth area_current: $area_current"
    }


    file mkdir $outdir

    set result_file [open ${basename}.result.rb w]
    dump_report_rb_vivado $clk_target $area_current $timing_final $result_file $device
    close $result_file

    set tmp_file ${basename}.result.xml
    set result_file [open $tmp_file w]
    dump_report_xml_vivado $clk_target $area_current $timing_final $area_total $result_file
    close $result_file
    safe_move $tmp_file $outdir/${basename}_export.xml

    set tmp_file ${basename}.result
    set result_file [open $tmp_file w]
    dump_report_vivado $has_impl $clk_target $area_current $timing_route $timing_synth $vivado_ver $result_file $device $project $solution
    close $result_file
    set fh [open $tmp_file r]
    puts [read $fh]; # print report to stdout 
    close $fh
    safe_move $tmp_file $outdir/${basename}_export.rpt
}

#----------------------------------------------------------------------------
# extract_from_utilization
#
# Open the Rodin flow report files to extract timing and  resouce used in the design
#----------------------------------------------------------------------------
proc extract_from_utilization { uti_file area_current_name area_totals_name} {
    upvar $area_current_name area_current
    upvar $area_totals_name area_totals

    # ${module}.uti
    set uti_fl [open $uti_file r]
    set uti_rpt_buf [read -nonewline $uti_fl]
    close $uti_fl
  
    ################################################################################
    # patterns for parsing utilization file
    ################################################################################
    set lut_re          {.*(?:Slice|CLB) LUTs\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+).*}
    set ff_re           {.*(?:Slice|CLB|) Registers\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+).*}
    set slice_re        {.*Slice\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+).*}
    set clb_re          {.*CLB\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+.)*}
    set DSP_re          {.*(?:DSPs|DSP Slices)\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+).*}
    #set bram36_re       {.*RAMB36E\d only.+?(\d+).*}
    #set bram18_re       {.*RAMB18E\d only.+?(\d+).*}
    set bram36_re       {.*RAMB36(?:E\d|/FIFO|)\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+).*}
    set bram18_re       {.*RAMB18(?:E\d|)\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+).*}
    set URAM_re         {.*URAM\s*\**\s+\|\s+(\d+)\s+\|\s+\d+\s+\|\s+(\d+).*}
    set fifo_re         {.*FIFO18E\d only.+?(\d+).*}
    set latch_re        {.*Register as Latch.+?(\d+).*}
    set srl_re          {.*LUT as Shift Register.+?(\d+).*}

    if {![regexp -line $slice_re $uti_rpt_buf match_txt slice_count slice_total] } {
        set slice_count 0
        set slice_total 0
    }

    if {![regexp -line $clb_re $uti_rpt_buf match_txt clb_count clb_total] } {
        set clb_count 0
        set clb_total 0
    }
 
    if {![regexp -line $lut_re $uti_rpt_buf match_txt lut_count lut_total] } {
        set lut_count 0
        set lut_total 0
    }
 
    if {![regexp -line $ff_re $uti_rpt_buf match_txt ff_count ff_total] } {
        set ff_count 0
        set ff_total 0
    }
 
    if {![regexp -line $DSP_re $uti_rpt_buf match_txt dsp_count dsp_total] } {
        set dsp_count 0
        set dsp_total 0
    }

    if {![regexp -line $bram18_re $uti_rpt_buf match_txt bram_count18 bram18_total] } {
        set bram_count18 0
        set bram18_total 0
    }

    if {![regexp -line $bram36_re $uti_rpt_buf match_txt bram_count36 bram36_total] } {
        set bram_count36 0
        set bram36_total 0
    }
 
    if {![regexp -line $latch_re $uti_rpt_buf match_txt latch_count]} {
        set latch_count 0
    }
 
    if {![regexp -line $srl_re $uti_rpt_buf match_txt srl_count]} {
        set srl_count 0
    }

    if {![regexp -line $URAM_re $uti_rpt_buf match_txt uram_count uram_total] } {
        set uram_count 0
        set uram_total 0
    }


#    if {![regexp $bram18_total_re $uti_rpt_buf match_txt bram18_total] } {
#        set bram18_total 0
#    }
 

    set has_uram $uram_total
    puts "HLS EXTRACTION: calculating BRAM count: ($bram_count18 bram18) + 2 * ($bram_count36 bram36)"
    set bram_count [expr $bram_count18 + 2 * $bram_count36]

    set area_current [list $slice_count $lut_count $ff_count $dsp_count $bram_count $latch_count $srl_count $clb_count $uram_count $has_uram]

    set area_totals [list $slice_total $lut_total $ff_total $dsp_total $bram18_total $clb_total $uram_total]
}

#----------------------------------------------------------------------------
# extract_from_timing_summary
#
# Opens the .rpt file to extract the actual timing delay value
#----------------------------------------------------------------------------
proc extract_from_timing_summary {file_name {clock_name "ap_clk"} {clk_target_varname ""} {clk_target_default ""}} {
    set report_file [open $file_name r]
    set report_buf [read -nonewline $report_file]
    close $report_file

    if { $clk_target_varname ne "" } {
        upvar $clk_target_varname clk_target
        set clk_target "NA"
        set clk_pattern "Path\\s+Group:\\s+${clock_name}.*?Requirement:\\s+(\\d+\\.\\d+)ns.*?"
        if {![regexp $clk_pattern $report_buf match_clk clk_target]} {
            if { $clk_target_default eq "" } {
                error "ERROR: cannot find clock target in file $file_name"
            }
            set clk_target $clk_target_default
            #puts "DEBUG: could not find target clock"
            #set clk_target [format "%2.3f" [extract_clk_period_sdc [glob -nocomplain *.xdc]]]
        }
    }

    set wns "NA"
    set clk_setup_pat "From\\s+Clock:\\s+${clock_name}\\s+To\\s+Clock:\\s+${clock_name}\\s+Setup\\s*:\[^,\]*,\\s*Worst\\s+Slack\\s+?(-?\\d+\\.\\d+)ns"
    if {[regexp ${clk_setup_pat} $report_buf -> setup_slack]} {
        #puts "DEBUG: setup slack is $setup_slack"
        set wns $setup_slack
        set lines [split $report_buf \n]
        foreach line $lines {
            if {[regexp {Min Period\s+(\S+)\s+(\S+)\s+(\S+)\s+(\S+)\s+(\S+)\s+(\S+)\s+(\S+)} \
                     $line -> corner lpin rpin req act mp_slack]} {
                #puts "DEBUG: min period slack is $mp_slack ($act - $req)\n$line"
                if { [expr $act == ($req + $mp_slack)] } {
                    if {$mp_slack < $setup_slack} {
                        #puts "DEBUG: using is $setup_slack"
                        set wns $mp_slack
                        break
                    }
                #} else {
                #    puts "DEBUG: something went wrong parsing mp_slack"
                #    break
                }
            }
        }
    }
    return $wns
}   

proc get_vivado_version {filename} {
    set fl [open $filename r]
    set report_buf [read -nonewline $fl]
    close $fl
    #set ver_pattern {.*Version : +(\S+) +(\S+) .*}
    set ver_pattern {.*Version.*Vivado +(\S+) +(\S+) .*}
    if {![regexp $ver_pattern $report_buf match_ver ver0 ver]} {
        set ver UNKNOWN
        set ver0 ""
    }
    return $ver0
}

proc dump_report_vivado { has_impl clk_target area_results timing_route timing_synth ver out device project solution } {
    set t2 $clk_target

    set dev $device
    set date [clock format [clock seconds]]
    puts $out ""
    puts $out ""
    puts $out "Implementation tool: Xilinx Vivado $ver"
    puts $out "Project:             $project"
    puts $out "Solution:            $solution"
    puts $out "Device target:       $dev"
    puts $out "Report date:         $date"
    puts $out ""

    set x1 [format "%-10s %8d" SLICE: [lindex $area_results 0]]
    set x2 [format "%-10s %8d" LUT: [lindex $area_results 1]]
    set x3 [format "%-10s %8d" FF: [lindex $area_results 2]]
    set x4 [format "%-10s %8d" DSP: [lindex $area_results 3]]
    set x5 [format "%-10s %8d" BRAM: [lindex $area_results 4]]
    set x7 [format "%-10s %8d" SRL: [lindex $area_results 6]]
    set x8 [format "%-10s %8d" CLB: [lindex $area_results 7]]
    set x9 [format "%-10s %8d" URAM: [lindex $area_results 8]]

    if { $timing_synth == "NA" } {
        set t1_syn $timing_synth
    } else {
        set t1_syn [format "%2.3f"  [expr $t2 - $timing_synth]]
    }

    if { $has_impl } {
        if { $timing_route == "NA" } {
            set t1_impl $timing_route
        } else {
            set t1_impl [format "%2.3f"  [expr $t2 - $timing_route]]
        }
    }

    if { $has_impl } {
        puts $out "#=== Post-Implementation Resource usage ==="
    } else {
        puts $out "#=== Post-Synthesis Resource usage ==="
    }

    if {[lindex $area_results 7] != 0} {
        puts $out "$x8"
    } else {
        puts $out "$x1"
    }
    puts $out "$x2"
    puts $out "$x3"
    puts $out "$x4"
    puts $out "$x5"
    puts $out "$x7"
    if {[lindex $area_results 9] != 0} {
        puts $out "$x9"
    }
    if {[lindex $area_results 5] != 0} {
        set x6 [format "%-10s %8d" LATCH: [lindex $area_results 5]]
        puts $out "$x6"
    }
    ## Report timing ###
    puts $out "#=== Final timing ==="
    puts $out "CP required:    $t2"
    puts $out "CP achieved post-synthesis:    $t1_syn"
    set t1 $t1_syn
    if { $has_impl } { 
        set t1 $t1_impl
        puts $out "CP achieved post-implementation:    $t1_impl" 
    }
    if {$t1 == "NA"} {
        puts $out "No Sequential Path"
    } else {
        if {[expr $t1 <= $t2]} {
            puts $out "Timing met"
        } else {
            puts $out "Timing not met"
        }
    }
}

#----------------------------------------------------------------------------
# dump_report_rb_vivado
#
# Generate rodin report
#----------------------------------------------------------------------------
proc dump_report_rb_vivado { clk_target area_results clk_achieved out device} {
    set t2 $clk_target
    puts $out "\$Footmark = \"FPGA_Xilinx\""
    puts $out "\$Description = \"by Vivado\""
    puts $out ""
    puts $out ""

    puts $out "#=== Resource usage ==="
    if {[lindex $area_results 7] != 0} {
        puts $out "\$CLB = \"[lindex $area_results 7]\""
    } else {
        puts $out "\$SLICE = \"[lindex $area_results 0]\""
    }
    puts $out "\$LUT = \"[lindex $area_results 1]\""
    puts $out "\$FF = \"[lindex $area_results 2]\""
    puts $out "\$DSP = \"[lindex $area_results 3]\""
    puts $out "\$BRAM =\"[lindex $area_results 4]\""
    puts $out "\$SRL =\"[lindex $area_results 6]\""
    if {[lindex $area_results 9] != 0} {
        puts $out "\$URAM = \"[lindex $area_results 8]\""
    }

    ## Report timing ###
    puts $out "#=== Final timing ==="
    if { $clk_achieved == "NA" } {
        set t1 $clk_achieved
    } else {
        set t1 [format "%2.3f"  [expr $t2 - $clk_achieved]]
    }
    puts $out "\$TargetCP = \"$t2\""
    puts $out "\$CP = \"$t1\""
}

#----------------------------------------------------------------------------
# dump_report_xml_vivado
#
# Generate rodin xml report
#----------------------------------------------------------------------------
proc dump_report_xml_vivado { clk_target area_results clk_achieved area_total out } {
    set targetcp $clk_target 
    # collect data
    set slice [lindex $area_results 0]
    set lut   [lindex $area_results 1]
    set ff    [lindex $area_results 2]
    set dsp   [lindex $area_results 3]
    set bram  [lindex $area_results 4]
    set srl   [lindex $area_results 6]
    set clb   [lindex $area_results 7]
    set uram   [lindex $area_results 8]
    set t_slice [lindex $area_total 0]
    set t_lut   [lindex $area_total 1]
    set t_ff    [lindex $area_total 2]
    set t_dsp   [lindex $area_total 3]
    set t_bram  [lindex $area_total 4]
    set t_clb   [lindex $area_total 5]
    set t_uram   [lindex $area_total 6]
    if { $clk_achieved == "NA" } {
        set achievedcp $clk_achieved
    } else {
        set achievedcp [format "%2.3f"  [expr $targetcp - $clk_achieved]]
    }
    # dump xml
    puts $out "<profile>"
    puts $out ""
    puts $out "<AreaReport>"
    puts $out "<Resources>"
    if {$clb != 0} {
        puts $out "<CLB>$clb</CLB>"
    } else {
        puts $out "<SLICE>$slice</SLICE>"
    }
    puts $out "<LUT>$lut</LUT>"
    puts $out "<FF>$ff</FF>"
    puts $out "<DSP>$dsp</DSP>"
    puts $out "<BRAM>$bram</BRAM>"
    if {$t_uram != 0} {
        puts $out "<URAM>$uram</URAM>"
    }
    puts $out "<SRL>$srl</SRL>"
    puts $out "</Resources>"
    puts $out "<AvailableResources>"
    if {$t_clb != 0} {
        puts $out "<CLB>$t_clb</CLB>"
    } else {
        puts $out "<SLICE>$t_slice</SLICE>"
    }
    puts $out "<LUT>$t_lut</LUT>"
    puts $out "<FF>$t_ff</FF>"
    puts $out "<DSP>$t_dsp</DSP>"
    puts $out "<BRAM>$t_bram</BRAM>"
    if {$t_uram != 0} {
        puts $out "<URAM>$t_uram</URAM>"
    }
    puts $out "</AvailableResources>"
    puts $out "</AreaReport>"
    puts $out ""
    puts $out "<TimingReport>"
    puts $out "<TargetClockPeriod>$targetcp</TargetClockPeriod>"
    puts $out "<AchievedClockPeriod>$achievedcp</AchievedClockPeriod>"
    puts $out "</TimingReport>"
    puts $out ""
    puts $out "</profile>"
}

#----------------------------------------------------------------------------
# extract_from_timing_report
#----------------------------------------------------------------------------
proc extract_from_timing_report {file_name} {

    set report_file [open $file_name r]
    set report_buf [read -nonewline $report_file]
    close $report_file

    set clk_pattern_met {.*?Slack +\(\S+?\) +: +(\d+\.\d+)ns.*}
    set clk_pattern_violated {.*?Slack +\(\S+?\) +: +-(\d+\.\d+)ns.*}
    if {[regexp ${clk_pattern_met} $report_buf match slack]}  {
        return $slack
    } elseif {[regexp ${clk_pattern_violated} $report_buf match slack]}  {
        return [expr 0.0 - $slack]
    }
    return "NA"
}

proc check_impl_run {impl_run_name error_if_timing_fails} {
    set impl_run [get_runs -quiet $impl_run_name]
    if { $impl_run eq "" } {
        error "Cannot find impl run '$impl_run_name'"
    }
    set WNS [get_property STATS.WNS $impl_run]
    set WHS [get_property STATS.WHS $impl_run]
    set TPWS [get_property STATS.TPWS $impl_run]
    set FAILED_NETS [get_property STATS.FAILED_NETS [get_runs $impl_run]]
    set msg_info "worst setup slack (WNS)=$WNS, worst hold slack (WHS)=$WHS, total pulse width slack(TPWS)=$TPWS, number of unrouted nets=$FAILED_NETS"
    puts "HLS: impl run complete: $msg_info"
    set err_cmd "puts"
    if { $error_if_timing_fails } {
        set err_cmd "error"
    }
    #if {$WNS < 0.0 || $WHS < 0.0 || $TPWS < 0.0 || $FAILED_NETS > 0}
    foreach var {WNS WHS TPWS} {
        set val [set $var]
        if {$val < 0.0} {
            $err_cmd "Vivado implementation timing failed: $var ($val) is less than 0"
        }
    }
}

proc run_report {args} {
    puts "Running report: $args"
    uplevel 1 $args
    set fileidx [lsearch -exact $args "-file"]
    if { $fileidx > 0 } {
        set outfile [lindex $args [incr fileidx]]
        if { ![file exists $outfile] } {
            puts "WARNING: Did not find report output file $outfile"
        } else {
            puts "Contents of report file '$outfile' is as follows:"
            set outfh [open $outfile r]
            puts [read $outfh]
            close $outfh
        }
    }
}

# vim:set ts=4 sw=4 et:


