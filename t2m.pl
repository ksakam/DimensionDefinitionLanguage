#!/usr/bin/perl
while(<>){
	$_ =~ s/\[/\[DIM,/g;
	$_ =~ s/\(/\[/g;
	$_ =~ s/\)/\]/g;
	print "$_";
}
