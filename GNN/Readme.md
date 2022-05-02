# Graph-Level Regression

### Datasets
* For off-the-shelf approach:
  * DFG: dfg_cp/dsp/ff/lut
  * CDFG: cdfg_cp/dsp/ff/lut
* For knowledge-rich approach:
  * DFG: dfg_*cp/dsp/ff/lut*_numerical
  * CDFG: cdfg_*cp/dsp/ff/lut*_numerical
  * CDFG+real-case benchmarks: cdfg_*cp/dsp/ff/lut*_all_numerical
* For knowledge-infused approachL
  * DFG: dfg_*cp/dsp/ff/lut*_binary
  * CDFG: dfg_*cp/dsp/ff/lut*_binary
  * CDFG+real-case benchmarks: cdfg_*cp/dsp/ff/lut*_all_binary

### GNN Models
* 14 models are included
* How to run:
  ```sh 
  python main_pna.py --dataset dfg_dsp
  ```
