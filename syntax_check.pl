#!/usr/bin/perl

while(<>){
	push(@arr,$_);
}
$arr = join('',@arr);
#print $arr;

@brr = split(/\n\n/,$arr);
#$brr = @brr;
#print "$brr\n";
#print "$brr[10]\n";

