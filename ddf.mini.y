%token LF

%%
line_list
	: line
	| line_list line

line
	: dimension_expression LF

dimension_expression
	: args
	| func
	| args rule args
	| func rule args
	| args rule func
	| func rule func

rule
	: '-' '>'

func
	: func_s args func_e

func_e
	: ')'

func_s
	: '('

args
	: arg
	| args list arg


arg
	: '$' digits
	| '$' digits dim

dim
	: dim_s digits_list dim_e

dim_e
	: ']'

dim_s
	: '['

digits_list
	: digits
	| digits_list list digits

list
	: ','

digits
	: digit
	| digits digit

digit
	: '1'
	| '2'
	| '3'
	| '4'
	| '5'
	| '6'
	| '7'
	| '8'
	| '9'
	| '0'
%%
