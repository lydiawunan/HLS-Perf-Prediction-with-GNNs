# Raw Graphs

# DFG: data flow graphs
* Raw files
  * C programs
  * Extracted intermediate files after HLS front-end compilation
  * Post-implementation resource usage and timing (saved in json)
* [Extracted DFGs in json format](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/dfg/DFG)
* Data preprocessing scripts:
  * [data_prep.py](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/blob/main/Graphs/dfg/data_prep.py)
  * [data_prep_util.py](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/blob/main/Graphs/dfg/data_prep_util.py)

# CDFG: control data flow graphs
* Raw files
  * C programs
  * Extracted intermediate files after HLS front-end compilation
  * Post-implementation resource usage and timing (saved in json)
* [Extracted CDFGs in json format](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/cdfg/CDFG)
* Data preprocessing scripts:
  * [data_prep.py](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/blob/main/Graphs/cdfg/data_prep.py)
  * [data_prep_util.py](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/blob/main/Graphs/cdfg/data_prep_util.py)

# Real-case Benchmarks
* CHStone: 
  * [Extracted graphs and post-implementation metrics (prefixed with chstone_) in json](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/CHStone)
  * [Intermediate files](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/CHStone_adb)
  * [Processed graph dataset](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/CHStone_ds)
* MachSuite: 
  * [Extracted graphs and post-implementation metrics (prefixed with MachSuite_) in json](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/MachSuite)
  * [Intermediate files](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/MachSuite_adb)
  * [Processed graph dataset](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/MachSuite_ds)
* PolyBench: 
  * [Extracted graphs and post-implementation metrics (prefixed with polybench_) in json](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/PolyBench)
  * [Intermediate files](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/PolyBench_adb)
  * [Processed data](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/PolyBench_ds)
* [Data preprocessing script](https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/blob/main/Graphs/process_real_case_graph.ipynb)
* Processed datasets:
  * The [dataset] that only has processed CDFGs(https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/cdfg)
  * The [dataset] that has CDFGs for training and real-case application for testing(https://github.com/lydiawunan/HLS-Perf-Prediction-with-GNNs/tree/main/Graphs/real%20case/all_real_case) 

