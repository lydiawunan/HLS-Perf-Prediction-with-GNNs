## Node-level dataset building and prediction with GNN models

### Dataset Generation - OGB standard

The original data comes from intermediate result from HLS simulation. We extract information from the *.adb file after binding process. There are three step to generate the node-level:

1. Pre-process the graph: Parse *.adb file into networkx grpah, and then output the information being used.
2. Re-organize the graph: Load all the cdfg or dfg graphs and re-index the nodes. In node level prediction, we treat all the graphs as a sub-graph of one extremely large graph. Thus, all nodes belong to the large graph, and the index should accumulate.
3. Convert to OGB node-level format.

The first and second step is done by running node-level/get_node_and_label.py

The third step is done by running node-level/build_node_level_dataset.py 

### Prediction with GNN

After you generated the dataset file, please run script: node-level/GNN_model_train_and_pred/gnn.py.

(*Note you'll have to modify a configuration file under ogb lib, see comments for details in the script*)

