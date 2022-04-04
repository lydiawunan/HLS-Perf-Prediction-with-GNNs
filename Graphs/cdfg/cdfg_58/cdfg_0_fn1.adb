<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
  <syndb class_id="0" tracking_level="0" version="0">
    <userIPLatency>-1</userIPLatency>
    <userIPName/>
    <cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
      <name>fn1</name>
      <ret_bitwidth>32</ret_bitwidth>
      <ports class_id="2" tracking_level="0" version="0">
        <count>0</count>
        <item_version>0</item_version>
      </ports>
      <nodes class_id="3" tracking_level="0" version="0">
        <count>2</count>
        <item_version>0</item_version>
        <item class_id="4" tracking_level="1" version="0" object_id="_1">
          <Value class_id="5" tracking_level="0" version="0">
            <Obj class_id="6" tracking_level="0" version="0">
              <type>0</type>
              <id>3</id>
              <name>br_ln24</name>
              <fileName>cdfg_0.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>24</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo class_id="7" tracking_level="0" version="0">
                <count>1</count>
                <item_version>0</item_version>
                <item class_id="8" tracking_level="0" version="0">
                  <first>/home/nanwu/GNN_DFG/bb/cdfg_58</first>
                  <second class_id="9" tracking_level="0" version="0">
                    <count>1</count>
                    <item_version>0</item_version>
                    <item class_id="10" tracking_level="0" version="0">
                      <first class_id="11" tracking_level="0" version="0">
                        <first>cdfg_0.c</first>
                        <second>fn1</second>
                      </first>
                      <second>24</second>
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
              <coreId>18</coreId>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>9</item>
          </oprand_edges>
          <opcode>br</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>1</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="4" object_id="_2">
          <Value>
            <Obj>
              <type>0</type>
              <id>7</id>
              <name>br_ln24</name>
              <fileName>cdfg_0.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>24</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/nanwu/GNN_DFG/bb/cdfg_58</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>cdfg_0.c</first>
                        <second>fn1</second>
                      </first>
                      <second>24</second>
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
              <coreId>18</coreId>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>10</item>
          </oprand_edges>
          <opcode>br</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>2</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
      </nodes>
      <consts class_id="13" tracking_level="0" version="0">
        <count>0</count>
        <item_version>0</item_version>
      </consts>
      <blocks class_id="14" tracking_level="0" version="0">
        <count>2</count>
        <item_version>0</item_version>
        <item class_id="15" tracking_level="1" version="0" object_id="_3">
          <Obj>
            <type>3</type>
            <id>4</id>
            <name/>
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
            <coreId>84</coreId>
          </Obj>
          <node_objs>
            <count>1</count>
            <item_version>0</item_version>
            <item>3</item>
          </node_objs>
        </item>
        <item class_id_reference="15" object_id="_4">
          <Obj>
            <type>3</type>
            <id>8</id>
            <name/>
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
            <coreId>0</coreId>
          </Obj>
          <node_objs>
            <count>1</count>
            <item_version>0</item_version>
            <item>7</item>
          </node_objs>
        </item>
      </blocks>
      <edges class_id="16" tracking_level="0" version="0">
        <count>4</count>
        <item_version>0</item_version>
        <item class_id="17" tracking_level="1" version="0" object_id="_5">
          <id>9</id>
          <edge_type>2</edge_type>
          <source_obj>8</source_obj>
          <sink_obj>3</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="17" object_id="_6">
          <id>10</id>
          <edge_type>2</edge_type>
          <source_obj>8</source_obj>
          <sink_obj>7</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="17" object_id="_7">
          <id>37</id>
          <edge_type>2</edge_type>
          <source_obj>4</source_obj>
          <sink_obj>8</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="17" object_id="_8">
          <id>38</id>
          <edge_type>2</edge_type>
          <source_obj>8</source_obj>
          <sink_obj>8</sink_obj>
          <is_back_edge>1</is_back_edge>
        </item>
      </edges>
    </cdfg>
    <cdfg_regions class_id="18" tracking_level="0" version="0">
      <count>3</count>
      <item_version>0</item_version>
      <item class_id="19" tracking_level="1" version="0" object_id="_9">
        <mId>1</mId>
        <mTag>fn1</mTag>
        <mNormTag>fn1</mNormTag>
        <mType>0</mType>
        <sub_regions>
          <count>2</count>
          <item_version>0</item_version>
          <item>2</item>
          <item>3</item>
        </sub_regions>
        <basic_blocks>
          <count>0</count>
          <item_version>0</item_version>
        </basic_blocks>
        <mII>-1</mII>
        <mDepth>-1</mDepth>
        <mMinTripCount>-1</mMinTripCount>
        <mMaxTripCount>-1</mMaxTripCount>
        <mMinLatency>-1</mMinLatency>
        <mMaxLatency>-1</mMaxLatency>
        <mIsDfPipe>0</mIsDfPipe>
        <mDfPipe class_id="-1"/>
      </item>
      <item class_id_reference="19" object_id="_10">
        <mId>2</mId>
        <mTag>Entry</mTag>
        <mNormTag>Entry</mNormTag>
        <mType>0</mType>
        <sub_regions>
          <count>0</count>
          <item_version>0</item_version>
        </sub_regions>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>4</item>
        </basic_blocks>
        <mII>-1</mII>
        <mDepth>-1</mDepth>
        <mMinTripCount>-1</mMinTripCount>
        <mMaxTripCount>-1</mMaxTripCount>
        <mMinLatency>0</mMinLatency>
        <mMaxLatency>0</mMaxLatency>
        <mIsDfPipe>0</mIsDfPipe>
        <mDfPipe class_id="-1"/>
      </item>
      <item class_id_reference="19" object_id="_11">
        <mId>3</mId>
        <mTag>VITIS_LOOP_24_1</mTag>
        <mNormTag>VITIS_LOOP_24_1</mNormTag>
        <mType>1</mType>
        <sub_regions>
          <count>0</count>
          <item_version>0</item_version>
        </sub_regions>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>8</item>
        </basic_blocks>
        <mII>1</mII>
        <mDepth>1</mDepth>
        <mMinTripCount>-1</mMinTripCount>
        <mMaxTripCount>-1</mMaxTripCount>
        <mMinLatency>-1</mMinLatency>
        <mMaxLatency>-1</mMaxLatency>
        <mIsDfPipe>0</mIsDfPipe>
        <mDfPipe class_id="-1"/>
      </item>
    </cdfg_regions>
    <fsm class_id="21" tracking_level="1" version="0" object_id="_12">
      <states class_id="22" tracking_level="0" version="0">
        <count>2</count>
        <item_version>0</item_version>
        <item class_id="23" tracking_level="1" version="0" object_id="_13">
          <id>1</id>
          <operations class_id="24" tracking_level="0" version="0">
            <count>3</count>
            <item_version>0</item_version>
            <item class_id="25" tracking_level="1" version="0" object_id="_14">
              <id>1</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="25" object_id="_15">
              <id>2</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="25" object_id="_16">
              <id>3</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="23" object_id="_17">
          <id>2</id>
          <operations>
            <count>3</count>
            <item_version>0</item_version>
            <item class_id_reference="25" object_id="_18">
              <id>5</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="25" object_id="_19">
              <id>6</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="25" object_id="_20">
              <id>7</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
          </operations>
        </item>
      </states>
      <transitions class_id="26" tracking_level="0" version="0">
        <count>2</count>
        <item_version>0</item_version>
        <item class_id="27" tracking_level="1" version="0" object_id="_21">
          <inState>1</inState>
          <outState>2</outState>
          <condition class_id="28" tracking_level="0" version="0">
            <id>-1</id>
            <sop class_id="29" tracking_level="0" version="0">
              <count>1</count>
              <item_version>0</item_version>
              <item class_id="30" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="27" object_id="_22">
          <inState>2</inState>
          <outState>2</outState>
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
    <res class_id="31" tracking_level="1" version="0" object_id="_23">
      <dp_component_resource class_id="32" tracking_level="0" version="0">
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
        <item class_id="33" tracking_level="0" version="0">
          <first>ap_NS_fsm</first>
          <second class_id="34" tracking_level="0" version="0">
            <count>4</count>
            <item_version>0</item_version>
            <item class_id="35" tracking_level="0" version="0">
              <first>(0Size)</first>
              <second>3</second>
            </item>
            <item>
              <first>(1Bits)</first>
              <second>1</second>
            </item>
            <item>
              <first>(2Count)</first>
              <second>3</second>
            </item>
            <item>
              <first>LUT</first>
              <second>14</second>
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
              <second>2</second>
            </item>
            <item>
              <first>(Consts)</first>
              <second>0</second>
            </item>
            <item>
              <first>FF</first>
              <second>2</second>
            </item>
          </second>
        </item>
      </dp_register_resource>
      <dp_dsp_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_dsp_resource>
      <dp_component_map class_id="36" tracking_level="0" version="0">
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
    <node_label_latency class_id="37" tracking_level="0" version="0">
      <count>2</count>
      <item_version>0</item_version>
      <item class_id="38" tracking_level="0" version="0">
        <first>3</first>
        <second class_id="39" tracking_level="0" version="0">
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>7</first>
        <second>
          <first>1</first>
          <second>0</second>
        </second>
      </item>
    </node_label_latency>
    <bblk_ent_exit class_id="40" tracking_level="0" version="0">
      <count>2</count>
      <item_version>0</item_version>
      <item class_id="41" tracking_level="0" version="0">
        <first>4</first>
        <second class_id="42" tracking_level="0" version="0">
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>8</first>
        <second>
          <first>1</first>
          <second>1</second>
        </second>
      </item>
    </bblk_ent_exit>
    <regions class_id="43" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="44" tracking_level="1" version="0" object_id="_24">
        <region_name>VITIS_LOOP_24_1</region_name>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>8</item>
        </basic_blocks>
        <nodes>
          <count>0</count>
          <item_version>0</item_version>
        </nodes>
        <anchor_node>-1</anchor_node>
        <region_type>8</region_type>
        <interval>1</interval>
        <pipe_depth>1</pipe_depth>
      </item>
    </regions>
    <dp_fu_nodes class_id="45" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_fu_nodes>
    <dp_fu_nodes_expression class_id="46" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_fu_nodes_expression>
    <dp_fu_nodes_module>
      <count>0</count>
      <item_version>0</item_version>
    </dp_fu_nodes_module>
    <dp_fu_nodes_io>
      <count>0</count>
      <item_version>0</item_version>
    </dp_fu_nodes_io>
    <return_ports>
      <count>0</count>
      <item_version>0</item_version>
    </return_ports>
    <dp_mem_port_nodes class_id="47" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_mem_port_nodes>
    <dp_reg_nodes>
      <count>0</count>
      <item_version>0</item_version>
    </dp_reg_nodes>
    <dp_regname_nodes>
      <count>0</count>
      <item_version>0</item_version>
    </dp_regname_nodes>
    <dp_reg_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_reg_phi>
    <dp_regname_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_regname_phi>
    <dp_port_io_nodes class_id="48" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_port_io_nodes>
    <port2core>
      <count>0</count>
      <item_version>0</item_version>
    </port2core>
    <node2core>
      <count>0</count>
      <item_version>0</item_version>
    </node2core>
  </syndb>
</boost_serialization>
