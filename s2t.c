#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1024
// protopype
int print_BUF_HEAD(char *, int *);
int shlink_BUF_HEAD(char *, int *);

struct options {
	int help;
	int stat;
	int check;
	int buff;
	char *in;
};

void help(void){
	printf("USAGE:\n");
	printf(" s2t [-h] [-s] [-c] buff=<size(int)> in=<input file>.\n");
	printf("  -h : help.\n");
	printf("  -s : stat.\n");
	printf("  -c : check args.\n");
	printf("  buff : set integer.\n");
	printf("  in : set *chars (len < 1024).\n");
}

void status(void){
	printf("STATUS:\n");
	printf(" Under construction.\n");
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
	(*opt).buff = 1048576;
	(*opt).in[0] = '\0';
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
		}else if(strncmp(optv[i],"in=",3) == 0){
			sscanf(optv[i],"in=%s",(*opt).in);
		}
	}
}

void check_options(struct options *opt){
	printf("OPTIONS:\n");
	printf(" opt.buff:%d:\n",(*opt).buff);
	printf(" opt.in:%s:\n",(*opt).in);
}

// function definition
int print_BUF_HEAD(char *_BUF_HEAD, int *_SHLINK_POS){
	printf(":::%s:::\n",_BUF_HEAD);
	return(0);
}

int shlink_BUF_HEAD(char *_BUF_HEAD, int *_SHLINK_POS){
	//printf("%s",_BUF_HEAD);
	return(0);
}

int main(int argc, char **argv){
	struct options *opt;
	int ie = 0;
	FILE *IN;
	int is_open = 0;
	int c;
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
	int (*SHLINK_POS) = 0;
	int PTR_BACK = 0;
	if((BUF_HEAD = malloc((size_t)sizeof(char)*(*opt).buff)) == NULL){
		fprintf(stderr,"[FAILED] malloc() @ main.\n");
		exit(1);
	}
	BUF_HEAD[0] = '\0';
	PRINT_TRIG_ACC = 1;
	while((c = fgetc(IN)) != EOF){
		PRINT_TRIG = 0;
		if(c == '['){
			PRINT_TRIG_ACC--;
		}
		if(c == ']'){
			PRINT_TRIG_ACC++;
		}
		if(PRINT_TRIG_ACC > 0 && c == ','){
			PRINT_TRIG = 1;
		}
		if(PRINT_TRIG_ACC > 0 && c == ')'){
			PRINT_TRIG = 1;
		}
		BUF_HEAD[BUF_PTR] = c;
		BUF_PTR++;
		BUF_HEAD[BUF_PTR] = '\0';
		//printf("%s\n",BUF_HEAD);
		//putc(c,stdout);
		if(PRINT_TRIG == 1){
			print_BUF_HEAD(BUF_HEAD,SHLINK_POS);
			PTR_BACK = shlink_BUF_HEAD(BUF_HEAD,SHLINK_POS);
			BUF_PTR = BUF_PTR - PTR_BACK;
			BUF_HEAD[BUF_PTR+1] = '\0';
		}
		
		// if c == '\n'
		
	}

	// close file
	if(is_open > 0){
		fclose(IN);
	}

	/* test */
	//printf("%s",BUF_HEAD);
	//printf("%s\n",BUF_HEAD+1);
	/* test */


	// finish
	return(0);
}
