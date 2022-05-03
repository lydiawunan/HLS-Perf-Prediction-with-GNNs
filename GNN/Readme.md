# Graph-Level Regression

### Datasets
* For the off-the-shelf approach:
  * DFG: dfg_*cp/dsp/ff/lut*
  * CDFG: cdfg_*cp/dsp/ff/lut*
  * CDFG+real-case benchmarks: cdfg_*cp/dsp/ff/lut*_all
* For the knowledge-rich approach:
  * DFG: dfg_*cp/dsp/ff/lut*_numerical
  * CDFG: cdfg_*cp/dsp/ff/lut*_numerical
  * CDFG+real-case benchmarks: cdfg_*cp/dsp/ff/lut*_all_numerical
* For the knowledge-infused approach:
  * DFG: dfg_*cp/dsp/ff/lut*_binary
  * CDFG: dfg_*cp/dsp/ff/lut*_binary
  * CDFG+real-case benchmarks: cdfg_*cp/dsp/ff/lut*_all_binary
* [More detailes of dataset format](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/GNN/dataset)

### GNN Models
* 14 models are included
* To switch among different approaches, the imported files should be changed accordingly in [node_encoder.py](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/blob/main/GNN/node_encoder.py).
  * For example, for the knowledge-infused approach, features_numerical.py should be imported.
    ```sh
    from features_numerical import get_node_feature_dims, get_edge_feature_dims 
    ```
* How to run:
  ```sh 
  python main_pna.py --dataset dfg_dsp
  ```
