#!/usr/bin/perl
@str = ();
print "{";
while(<>){
	chomp;
	$_ =~ s/\[/\[DIM,/g;
	$_ =~ s/\(/\[/g;
	$_ =~ s/\)/\]/g;
	push(@str,$_);
}
$strout = join(", ",@str);
print $strout;
print "}";
