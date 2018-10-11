#!/usr/bin/perl

while(<>){
	$_ =~ s/\((\$[0-9]+),/$1\(/g;
	print $_;
}
