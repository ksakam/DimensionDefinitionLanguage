#!/usr/bin/wolframscript -function
Function[
  Map[ Function[StringReplace[" "->""][ToString[ImportString[#,"ExpressionJSON"]]]],StringSplit[Import[#1,"Text"],"\n"] ]
]
