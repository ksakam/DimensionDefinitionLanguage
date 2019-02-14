$E$($X$DDL,$X$DRY)
$X$Application -> $X$Mathematica
$X$FunctionObject -> $X$List($X$toPartitionSheet)
$X$FileObject -> $X$List($`dpf_Fe-BCC.xlsx)
$;X$Set($xlsx,$X$Import($`dpf_Fe-BCC.xlsx))
$;X$Set($sheet,$X$toPartitionSheet($`$$$3[],$`$$$2002[],$`$$$2004[,])($`$$3020)($xlsx))
$X$Export($`test.sheet,$X$FullForm($sheet),$`String)
