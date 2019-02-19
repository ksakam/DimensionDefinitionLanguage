$RE$DRY($X$FileType,$X$DDF,$X$Application)
$X$Application	->	$X$Mathematica
$X$Set($xlsx,$X$Import($`dpf_Fe-BCC.xlsx))
$X$Set($sheet,$X$toPartitionSheet($X$List($`$$$3[],$`$$$2002[],$`$$$2004[,]))($`$$3020)($xlsx))
$X$Export($`test.sheet,$X$FullForm($sheet),$`String)
