$RE$DRY($X$FileType,$X$DDF)
$X$Application	->	$X$Mathematica
$X$Set($xlsx,$X$Import($`dpf_Fe-BCC.xlsx))
$X$Set($sheet,$X$toPartitionSheet($X$DDF)($X$FileType)($xlsx))
$X$Export($`test.sheet,$X$FullForm($sheet),$`String)
