Get["/home/kamano/gitsrc/MATH_SCRIPT/SCRIPTS/DataFederation.m"];
Set[xlsx,Import["dpf_Fe-BCC.xlsx"]];
Set[sheet,toPartitionSheet[List["$$$3[DIM,]","$$$2002[DIM,]","$$$2004[DIM,,]"]]["$$3020"][xlsx]];
Export["test.sheet",FullForm[sheet],"String"]
