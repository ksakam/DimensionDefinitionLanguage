#!/usr/local/bin/math -script
Function[Print[ Quiet[   StringReplace[{"{"->"","}"->"",", "->"\n"}][ToString[Map[StringReplace[{" "->"","\t"->"","\n"->""}][ExportString[#,"ExpressionJSON"]]&,Get[#1]]]]]   ]]
