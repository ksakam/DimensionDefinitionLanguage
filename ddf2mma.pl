#!/usr/bin/perl
@arr=();
while(<>){
	chomp;
	@line = split(/->/,$_);
	$n = @line;
	#print "$n\n";
	if($n == 1){
		#print "$line[0]";
		&to_mma($line[0]);
	}else{
		#print "$line[0]";
		&to_mma($line[0]);
		print "->";
		#print "$line[1]";
		&to_mma($line[1]);
	}
	print "\n";
}

sub to_mma{
	$tmp = $_[0];
	if($tmp =~ /^\(/){
		&to_func($tmp);
	}else{
		&to_list($tmp);
	}
}

sub to_func{
	my $str = $_[0];
	$str =~ s/\(//g;
	$str =~ s/\)//g;
	my @str = split(/,/,$str);
	my $head = shift(@str);
	$sstr = join(',',@str);
	print "$head";
	print "[";
	print "$sstr";
	print "]";
}

sub to_list{
	print "{";
	print $_[0];
	print "}";
}

