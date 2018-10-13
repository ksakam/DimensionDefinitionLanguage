#!/usr/bin/perl

while(<>){
	#print $_;
	$_ =~ s/\((\$[0-9]+(\[[0-9,]+\]){0,1})/$1\(/g;
	#print $_;
	$_ =~ s/\(,/\(/g;
	print $_;
	#print "\n";
}
