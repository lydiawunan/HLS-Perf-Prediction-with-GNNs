<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
  <syndb class_id="0" tracking_level="0" version="0">
    <userIPLatency>-1</userIPLatency>
    <userIPName/>
    <cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
      <name>fn1</name>
      <ret_bitwidth>16</ret_bitwidth>
      <ports class_id="2" tracking_level="0" version="0">
        <count>3</count>
        <item_version>0</item_version>
        <item class_id="3" tracking_level="1" version="0" object_id="_1">
          <Value class_id="4" tracking_level="0" version="0">
            <Obj class_id="5" tracking_level="0" version="0">
              <type>1</type>
              <id>1</id>
              <name>p</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo class_id="6" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName>p</originalName>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>97</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>0</if_type>
          <array_size>0</array_size>
          <bit_vecs class_id="7" tracking_level="0" version="0">
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
        <item class_id_reference="3" object_id="_2">
          <Value>
            <Obj>
              <type>1</type>
              <id>2</id>
              <name>p_4</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName>p_4</originalName>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>305</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>0</if_type>
          <array_size>0</array_size>
          <bit_vecs>
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
        <item class_id_reference="3" object_id="_3">
          <Value>
            <Obj>
              <type>1</type>
              <id>3</id>
              <name>p_11</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName>p_11</originalName>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>49</coreId>
            </Obj>
            <bitwidth>8</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>0</if_type>
          <array_size>0</array_size>
          <bit_vecs>
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
      </ports>
      <nodes class_id="8" tracking_level="0" version="0">
        <count>4</count>
        <item_version>0</item_version>
        <item class_id="9" tracking_level="1" version="0" object_id="_4">
          <Value>
            <Obj>
              <type>0</type>
              <id>12</id>
              <name>p_read</name>
              <fileName>dfg_8.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>7</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item class_id="10" tracking_level="0" version="0">
                  <first>/home/nanwu/GNN_DFG/bb/dfg_37</first>
                  <second class_id="11" tracking_level="0" version="0">
                    <count>1</count>
                    <item_version>0</item_version>
                    <item class_id="12" tracking_level="0" version="0">
                      <first class_id="13" tracking_level="0" version="0">
                        <first>dfg_8.c</first>
                        <second>fn1</second>
                      </first>
                      <second>7</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName>p</originalName>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>0</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <oprand_edges>
            <count>2</count>
            <item_version>0</item_version>
            <item>18</item>
            <item>19</item>
          </oprand_edges>
          <opcode>read</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>1</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_5">
          <Value>
            <Obj>
              <type>0</type>
              <id>13</id>
              <name>trunc_ln18</name>
              <fileName>dfg_8.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>18</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/nanwu/GNN_DFG/bb/dfg_37</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>dfg_8.c</first>
                        <second>fn1</second>
                      </first>
                      <second>18</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName/>
              <rtlName>grp_fu_36_p0</rtlName>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>107</coreId>
            </Obj>
            <bitwidth>16</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>20</item>
          </oprand_edges>
          <opcode>trunc</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>2</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_6">
          <Value>
            <Obj>
              <type>0</type>
              <id>14</id>
              <name>result</name>
              <fileName>dfg_8.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>17</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/nanwu/GNN_DFG/bb/dfg_37</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>dfg_8.c</first>
                        <second>fn1</second>
                      </first>
                      <second>17</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName>result</originalName>
              <rtlName>mul_mul_16s_16s_16_4_1_U1</rtlName>
              <control>auto</control>
              <opType>mul</opType>
              <implIndex>dsp</implIndex>
              <coreName>DSP48</coreName>
              <coreId>119</coreId>
            </Obj>
            <bitwidth>16</bitwidth>
          </Value>
          <oprand_edges>
            <count>2</count>
            <item_version>0</item_version>
            <item>21</item>
            <item>23</item>
          </oprand_edges>
          <opcode>mul</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>2.15</m_delay>
          <m_topoIndex>3</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_7">
          <Value>
            <Obj>
              <type>0</type>
              <id>15</id>
              <name>_ln19</name>
              <fileName>dfg_8.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>19</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/nanwu/GNN_DFG/bb/dfg_37</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>dfg_8.c</first>
                        <second>fn1</second>
                      </first>
                      <second>19</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>0</coreId>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>24</item>
          </oprand_edges>
          <opcode>ret</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>4</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
      </nodes>
      <consts class_id="15" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="16" tracking_level="1" version="0" object_id="_8">
          <Value>
            <Obj>
              <type>2</type>
              <id>22</id>
              <name>empty</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>268987235</coreId>
            </Obj>
            <bitwidth>16</bitwidth>
          </Value>
          <const_type>0</const_type>
          <content>43656</content>
        </item>
      </consts>
      <blocks class_id="17" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="18" tracking_level="1" version="0" object_id="_9">
          <Obj>
            <type>3</type>
            <id>16</id>
            <name>fn1</name>
            <fileName/>
            <fileDirectory/>
            <lineNumber>0</lineNumber>
            <contextFuncName/>
            <contextNormFuncName/>
            <inlineStackInfo>
              <count>0</count>
              <item_version>0</item_version>
            </inlineStackInfo>
            <originalName/>
            <rtlName/>
            <control/>
            <opType/>
            <implIndex/>
            <coreName/>
            <coreId>609</coreId>
          </Obj>
          <node_objs>
            <count>4</count>
            <item_version>0</item_version>
            <item>12</item>
            <item>13</item>
            <item>14</item>
            <item>15</item>
          </node_objs>
        </item>
      </blocks>
      <edges class_id="19" tracking_level="0" version="0">
        <count>5</count>
        <item_version>0</item_version>
        <item class_id="20" tracking_level="1" version="0" object_id="_10">
          <id>19</id>
          <edge_type>1</edge_type>
          <source_obj>1</source_obj>
          <sink_obj>12</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_11">
          <id>20</id>
          <edge_type>1</edge_type>
          <source_obj>12</source_obj>
          <sink_obj>13</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_12">
          <id>21</id>
          <edge_type>1</edge_type>
          <source_obj>13</source_obj>
          <sink_obj>14</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_13">
          <id>23</id>
          <edge_type>1</edge_type>
          <source_obj>22</source_obj>
          <sink_obj>14</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_14">
          <id>24</id>
          <edge_type>1</edge_type>
          <source_obj>14</source_obj>
          <sink_obj>15</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
      </edges>
    </cdfg>
    <cdfg_regions class_id="21" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="22" tracking_level="1" version="0" object_id="_15">
        <mId>1</mId>
        <mTag>fn1</mTag>
        <mNormTag>fn1</mNormTag>
        <mType>0</mType>
        <sub_regions>
          <count>0</count>
          <item_version>0</item_version>
        </sub_regions>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>16</item>
        </basic_blocks>
        <mII>-1</mII>
        <mDepth>-1</mDepth>
        <mMinTripCount>-1</mMinTripCount>
        <mMaxTripCount>-1</mMaxTripCount>
        <mMinLatency>3</mMinLatency>
        <mMaxLatency>3</mMaxLatency>
        <mIsDfPipe>0</mIsDfPipe>
        <mDfPipe class_id="-1"/>
      </item>
    </cdfg_regions>
    <fsm class_id="24" tracking_level="1" version="0" object_id="_16">
      <states class_id="25" tracking_level="0" version="0">
        <count>4</count>
        <item_version>0</item_version>
        <item class_id="26" tracking_level="1" version="0" object_id="_17">
          <id>1</id>
          <operations class_id="27" tracking_level="0" version="0">
            <count>3</count>
            <item_version>0</item_version>
            <item class_id="28" tracking_level="1" version="0" object_id="_18">
              <id>12</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_19">
              <id>13</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_20">
              <id>14</id>
              <stage>4</stage>
              <latency>4</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_21">
          <id>2</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_22">
              <id>14</id>
              <stage>3</stage>
              <latency>4</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_23">
          <id>3</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_24">
              <id>14</id>
              <stage>2</stage>
              <latency>4</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_25">
          <id>4</id>
          <operations>
            <count>10</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_26">
              <id>4</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_27">
              <id>5</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_28">
              <id>6</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_29">
              <id>7</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_30">
              <id>8</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_31">
              <id>9</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_32">
              <id>10</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_33">
              <id>11</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_34">
              <id>14</id>
              <stage>1</stage>
              <latency>4</latency>
            </item>
            <item class_id_reference="28" object_id="_35">
              <id>15</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
          </operations>
        </item>
      </states>
      <transitions class_id="29" tracking_level="0" version="0">
        <count>3</count>
        <item_version>0</item_version>
        <item class_id="30" tracking_level="1" version="0" object_id="_36">
          <inState>1</inState>
          <outState>2</outState>
          <condition class_id="31" tracking_level="0" version="0">
            <id>-1</id>
            <sop class_id="32" tracking_level="0" version="0">
              <count>1</count>
              <item_version>0</item_version>
              <item class_id="33" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="30" object_id="_37">
          <inState>2</inState>
          <outState>3</outState>
          <condition>
            <id>-1</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="30" object_id="_38">
          <inState>3</inState>
          <outState>4</outState>
          <condition>
            <id>-1</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
      </transitions>
    </fsm>
    <res class_id="34" tracking_level="1" version="0" object_id="_39">
      <dp_component_resource class_id="35" tracking_level="0" version="0">
        <count>0</count>
        <item_version>0</item_version>
      </dp_component_resource>
      <dp_expression_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_expression_resource>
      <dp_fifo_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_fifo_resource>
      <dp_memory_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_memory_resource>
      <dp_multiplexer_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="36" tracking_level="0" version="0">
          <first>ap_NS_fsm</first>
          <second class_id="37" tracking_level="0" version="0">
            <count>4</count>
            <item_version>0</item_version>
            <item class_id="38" tracking_level="0" version="0">
              <first>(0Size)</first>
              <second>5</second>
            </item>
            <item>
              <first>(1Bits)</first>
              <second>1</second>
            </item>
            <item>
              <first>(2Count)</first>
              <second>5</second>
            </item>
            <item>
              <first>LUT</first>
              <second>25</second>
            </item>
          </second>
        </item>
      </dp_multiplexer_resource>
      <dp_register_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>ap_CS_fsm</first>
          <second>
            <count>3</count>
            <item_version>0</item_version>
            <item>
              <first>(Bits)</first>
              <second>4</second>
            </item>
            <item>
              <first>(Consts)</first>
              <second>0</second>
            </item>
            <item>
              <first>FF</first>
              <second>4</second>
            </item>
          </second>
        </item>
      </dp_register_resource>
      <dp_dsp_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>mul_mul_16s_16s_16_4_1_U1</first>
          <second>
            <count>1</count>
            <item_version>0</item_version>
            <item>
              <first>DSP</first>
              <second>1</second>
            </item>
          </second>
        </item>
      </dp_dsp_resource>
      <dp_component_map class_id="39" tracking_level="0" version="0">
        <count>0</count>
        <item_version>0</item_version>
      </dp_component_map>
      <dp_expression_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_expression_map>
      <dp_fifo_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_fifo_map>
      <dp_memory_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_memory_map>
    </res>
    <node_label_latency class_id="40" tracking_level="0" version="0">
      <count>4</count>
      <item_version>0</item_version>
      <item class_id="41" tracking_level="0" version="0">
        <first>12</first>
        <second class_id="42" tracking_level="0" version="0">
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>13</first>
        <second>
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>14</first>
        <second>
          <first>0</first>
          <second>3</second>
        </second>
      </item>
      <item>
        <first>15</first>
        <second>
          <first>3</first>
          <second>0</second>
        </second>
      </item>
    </node_label_latency>
    <bblk_ent_exit class_id="43" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="44" tracking_level="0" version="0">
        <first>16</first>
        <second class_id="45" tracking_level="0" version="0">
          <first>0</first>
          <second>3</second>
        </second>
      </item>
    </bblk_ent_exit>
    <regions class_id="46" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </regions>
    <dp_fu_nodes class_id="47" tracking_level="0" version="0">
      <count>3</count>
      <item_version>0</item_version>
      <item class_id="48" tracking_level="0" version="0">
        <first>26</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>12</item>
        </second>
      </item>
      <item>
        <first>32</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>13</item>
        </second>
      </item>
      <item>
        <first>36</first>
        <second>
          <count>4</count>
          <item_version>0</item_version>
          <item>14</item>
          <item>14</item>
          <item>14</item>
          <item>14</item>
        </second>
      </item>
    </dp_fu_nodes>
    <dp_fu_nodes_expression class_id="50" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="51" tracking_level="0" version="0">
        <first>trunc_ln18_fu_32</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>13</item>
        </second>
      </item>
    </dp_fu_nodes_expression>
    <dp_fu_nodes_module>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>grp_fu_36</first>
        <second>
          <count>4</count>
          <item_version>0</item_version>
          <item>14</item>
          <item>14</item>
          <item>14</item>
          <item>14</item>
        </second>
      </item>
    </dp_fu_nodes_module>
    <dp_fu_nodes_io>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>p_read_read_fu_26</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>12</item>
        </second>
      </item>
    </dp_fu_nodes_io>
    <return_ports>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>ap_return</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>15</item>
        </second>
      </item>
    </return_ports>
    <dp_mem_port_nodes class_id="52" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_mem_port_nodes>
    <dp_reg_nodes>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>42</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>13</item>
        </second>
      </item>
    </dp_reg_nodes>
    <dp_regname_nodes>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>trunc_ln18_reg_42</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>13</item>
        </second>
      </item>
    </dp_regname_nodes>
    <dp_reg_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_reg_phi>
    <dp_regname_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_regname_phi>
    <dp_port_io_nodes class_id="53" tracking_level="0" version="0">
      <count>3</count>
      <item_version>0</item_version>
      <item class_id="54" tracking_level="0" version="0">
        <first>p</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>
            <first>read</first>
            <second>
              <count>1</count>
              <item_version>0</item_version>
              <item>12</item>
            </second>
          </item>
        </second>
      </item>
      <item>
        <first>p_11</first>
        <second>
          <count>0</count>
          <item_version>0</item_version>
        </second>
      </item>
      <item>
        <first>p_4</first>
        <second>
          <count>0</count>
          <item_version>0</item_version>
        </second>
      </item>
    </dp_port_io_nodes>
    <port2core>
      <count>0</count>
      <item_version>0</item_version>
    </port2core>
    <node2core>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>14</first>
        <second>
          <first>12</first>
          <second>3</second>
        </second>
      </item>
    </node2core>
  </syndb>
</boost_serialization>
