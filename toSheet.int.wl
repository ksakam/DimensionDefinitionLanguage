Get["/home/kamano/gitsrc/MATH_SCRIPT/SCRIPTS/DataFederation.m"];
Set[xlsx,Import["dpf_Fe-BCC.xlsx"]];
Set[sheet,toPartitionSheet["$$$3[]","$$$2002[]","$$$2004[,]"]["$$3020"][xlsx]];
Export["test.sheet",FullForm[sheet],"String"]
