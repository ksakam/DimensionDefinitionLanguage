#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1024
#define BUFF_LEN 1024
//  UNDER CONSTRUCTION
// TODO: print simple ARG

// protopype
int print_BUF_HEAD(char *, char *, char *, int *, int, int);
int scan_EMP_BODY(char *);
int search_pos_BRK_S_LAST(char *);

struct options {
	int help;
	int stat;
	int check;
	int buff;
	int war;
	char *in;
};

void help(void){
	printf("USAGE:\n");
	printf(" t2s [-h] [-s] [-c] buff=<size(int)> in=<input file> w=<print warnning>.\n");
	printf("  -h : help.\n");
	printf("  -s : stat.\n");
	printf("  -c : check args.\n");
	printf("  buff : set integer.\n");
	printf("  in : set *chars (len < 1024).\n");
	printf("  war : set integer.\n");
}

void status(void){
	printf("STATUS:\n");
	printf(" Under construction.\n");
	printf("   - print_BUF_HEAD()\n");
}

struct options *alloc_options(void){
	struct options *p;
	if((p = malloc(sizeof(struct options) * 1)) == NULL){
		printf("failed : malloc() in alloc_options().\n");
		exit(1);
	}
	if(((*p).in = malloc(sizeof(char) * LEN)) == NULL){
		printf("failed : malloc() in alloc_options().\n");
		exit(1);
	}
	return(p);
}

void init_options(struct options *opt){
	(*opt).help = 0;
	(*opt).stat = 0;
	(*opt).check = 0;
	(*opt).buff = BUFF_LEN;
	(*opt).in[0] = '\0';
	(*opt).war = 0;
}

void get_options(int optc, char **optv, struct options *opt){
	int i = 0;
	for(i=0;i<optc;i++){
		if(strcmp(optv[i],"-h") == 0){
			(*opt).help = 1;
		}else if(strcmp(optv[i],"-s") == 0){
			(*opt).stat = 1;
		}else if(strcmp(optv[i],"-c") == 0){
			(*opt).check = 1;
		}else if(strncmp(optv[i],"buff=",5) == 0){
			sscanf(optv[i],"buff=%d",&(*opt).buff);
		}else if(strncmp(optv[i],"w=",2) == 0){
			sscanf(optv[i],"w=%d",&(*opt).war);
		}else if(strncmp(optv[i],"in=",3) == 0){
			sscanf(optv[i],"in=%s",(*opt).in);
		}
	}
}

void check_options(struct options *opt){
	printf("OPTIONS:\n");
	printf(" opt.buff:%d:\n",(*opt).buff);
	printf(" opt.in:%s:\n",(*opt).in);
	printf(" opt.war:%d:\n",(*opt).war);
}

// function definition
int scan_EMP_BODY(char *_BUF){
	int count = 0;
	int len_BUF = 0;
	char miniBUF[2];
	int i;
	len_BUF = strlen(_BUF);
	miniBUF[0] = '\0';
	miniBUF[1] = _BUF[0];
	for(i=1;i<len_BUF;i++){
		miniBUF[0] = miniBUF[1];
		miniBUF[1] = _BUF[i];
		if(miniBUF[0]=='(' && miniBUF[1]==')'){
			count++;
		}
	}
	return(count);
}

int search_pos_BRK_S_LAST(char *_BUF){
	//UNDER CONSTRUCTION
	int pos = 0;
	int len_BUF = 0;
	int i;
	for(i=0;i<len_BUF;i++){
		if(_BUF[i] == '('){
			pos = i;
		}
	}
	return(i);
}

int print_BUF_HEAD(char *_BUF_HEAD, char *_BUF_PRINT, char *_BUF_TMP, int *_BRK_REMAIN, int _LIST_LV, int WAR){
	int RETURN_LEN = 0;
	int BUF_LEN = 0;
	int BUF_HEAD_PTR = 0;
	int BUF_END_PTR = 0;
	int i;
	_BUF_PRINT[0] = '\0';
	strcpy(_BUF_PRINT,_BUF_HEAD);
	BUF_LEN = strlen(_BUF_PRINT);
	printf("%s",_BUF_PRINT+BUF_HEAD_PTR);
	return(RETURN_LEN);
}


int main(int argc, char **argv){
	struct options *opt;
	int ie = 0;
	FILE *IN;
	int is_open = 0;
	int c;
	int COUNT = 0;
	opt = alloc_options();
	init_options(opt);
	get_options(argc-1, argv+1, opt);
	if(argc == 1){
		(*opt).help = 1;
	}
	if((*opt).help == 1){
		help();
		ie = 1;
	}
	if((*opt).stat == 1){
		status();
		ie = 1;
	}
	if((*opt).check == 1){
		check_options(opt);
		ie = 1;
	}
	if(ie == 1){
		exit(0);
	}

	// open file
	if((IN = fopen((*opt).in,"r")) == NULL){
		perror((*opt).in);
		exit(1);
	}
	is_open = 1;

	// main function
	int PRINT_TRIG_ACC = 1;
	int PRINT_TRIG = 0;
	char *BUF_HEAD;
	int BUF_PTR = 0;
	char *BUF_PRINT;
	int BRK_REMAIN = 0;
	int LIST_LV = 0;
	char *BUF_TMP;
	if((BUF_HEAD = malloc((size_t)sizeof(char)*(*opt).buff)) == NULL){
		fprintf(stderr,"[FAILED] malloc() @ BUF_HEAD @ main .\n");
		exit(1);
	}
	BUF_HEAD[0] = '\0';
	if((BUF_PRINT = malloc((size_t)sizeof(char)*(*opt).buff)) == NULL){
		fprintf(stderr,"[FAILED] malloc() @ BUF_PRINT @ main .\n");
		exit(1);
	}
	BUF_PRINT[0] = '\0';
	if((BUF_TMP = malloc((size_t)sizeof(char)*(*opt).buff)) == NULL){
		fprintf(stderr,"[FAILED] malloc() @ BUF_TMP @ main .\n");
		exit(1);
	}
	BUF_TMP[0] = '\0';

	PRINT_TRIG_ACC = 1;
	while((c = fgetc(IN)) != EOF){
		COUNT++;
		PRINT_TRIG = 0;
		if((*opt).war > 0){ fprintf(stderr,"::COUNTER:%d:::\n",COUNT); }
		if(c == '('){
			LIST_LV++;
		}
		if(c == ')'){
			LIST_LV--;
		}
		if(c == '['){
			PRINT_TRIG_ACC--;
		}
		if(c == ']'){
			PRINT_TRIG_ACC++;
		}
		if(PRINT_TRIG_ACC > 0 && LIST_LV==1 && c == ','){
			PRINT_TRIG = 1;
		}
		if(PRINT_TRIG_ACC > 0 && LIST_LV!=1 && c == '('){
			PRINT_TRIG = 1;
		}
		if(PRINT_TRIG_ACC > 0 && c == ')'){
			PRINT_TRIG = 1;
		}
		if(c == '('){
			BRK_REMAIN++;
		}
		BUF_HEAD[BUF_PTR] = c;
		BUF_PTR++;
		BUF_HEAD[BUF_PTR] = '\0';
		if(PRINT_TRIG > 0){
			BUF_PTR = print_BUF_HEAD(BUF_HEAD,BUF_PRINT,BUF_TMP,&BRK_REMAIN,LIST_LV,(*opt).war);
			BUF_HEAD[BUF_PTR+1] = '\0';
		}
		if(c == '\n'){
			LIST_LV = 0;
			printf("%s",BUF_HEAD);
			PRINT_TRIG_ACC = 1;
			PRINT_TRIG = 0;
			BUF_HEAD[0] = '\0';
			BUF_PTR = 0;
			BUF_PRINT[0] = '\0';
			BRK_REMAIN = 0;
			if((*opt).war > 0){ fprintf(stderr,"\n"); }
		}
	}

	// close file
	if(is_open > 0){
		fclose(IN);
	}

	// finish
	return(0);
}
