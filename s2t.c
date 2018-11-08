#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1024
// protopype
int print_BUF_HEAD(char *, int *, char *);
int shlink_BUF_HEAD(char *, int *, char *);

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
int print_BUF_HEAD(char *_BUF_HEAD, int *_SHLINK_POS, char *_BUF_TMP){
	int RETURN_LEN = 0;
	int BUF_LEN = 0;
	int COPY_S_PTR = 0;
	int i;
	_BUF_TMP[0] = '\0';
	strcpy(_BUF_TMP,_BUF_HEAD);
	BUF_LEN = strlen(_BUF_TMP);
	fprintf(stderr,":::%d:::\n",BUF_LEN);
	fprintf(stderr,"::REMAIN:%s:::\n",_BUF_TMP);
	if(_BUF_HEAD[BUF_LEN-1] == ',' && _BUF_HEAD[0] == '('){
		fprintf(stderr,"PP&AC\n");
		_BUF_TMP[BUF_LEN-1] = '(';	//Be carefull !!
		//printf(";;;%s;;;",_BUF_TMP+1);
		printf("%s",_BUF_TMP+1);
		_BUF_HEAD[0] = '\0';
		_BUF_TMP[0] = '\0';
		RETURN_LEN = 0;
	}else if(_BUF_HEAD[BUF_LEN-1] == ',' && _BUF_HEAD[0] != '('){
		fprintf(stderr,"AP&AC\n");
		//printf(";;;%s;;;",_BUF_TMP);
		printf("%s",_BUF_TMP);
		_BUF_HEAD[0] = '\0';
		_BUF_TMP[0] = '\0';
		RETURN_LEN = 0;
	}else if(_BUF_HEAD[BUF_LEN-1] == ')'){
		fprintf(stderr,"PP&PC\n");
		// search COPY_S_PTR
		for(i=BUF_LEN-1;i>=0;i--){
			fprintf(stderr,"::i:%d:::",i);
			fprintf(stderr,"::c:%c:::\n",_BUF_TMP[i]);
			if(_BUF_TMP[i] == '('){
				COPY_S_PTR = i;
				break;
			}else{
				COPY_S_PTR = -1;
			}
		}
		if(COPY_S_PTR != -1){
			fprintf(stderr,"::C:%d:::\n",COPY_S_PTR);
			_BUF_TMP[BUF_LEN-1] = '(';
			_BUF_TMP[BUF_LEN] = ')';
			_BUF_TMP[BUF_LEN+1] = '\0';
			//printf(";;;%s;;;",_BUF_TMP+COPY_S_PTR+1);
			printf("%s",_BUF_TMP+COPY_S_PTR+1);
			_BUF_HEAD[COPY_S_PTR] = '\0';
			RETURN_LEN = COPY_S_PTR;
		}else{
			//printf(";;;%s;;;",_BUF_TMP);
			printf("%s",_BUF_TMP);
			_BUF_TMP[0] = '\0';
			_BUF_HEAD[0] = '\0';
			RETURN_LEN = 0;
		}
	}
	return(RETURN_LEN);
}

int shlink_BUF_HEAD(char *_BUF_HEAD, int *_SHLINK_POS, char *_BUF_TMP){
	// not used
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
	int *SHLINK_POS;
	int PTR_BACK = 0;
	char *BUF_TMP;
	if((BUF_HEAD = malloc((size_t)sizeof(char)*(*opt).buff)) == NULL){
		fprintf(stderr,"[FAILED] malloc() @ BUF_HEAD @ main .\n");
		exit(1);
	}
	BUF_HEAD[0] = '\0';
	if((SHLINK_POS = malloc((size_t)sizeof(char)*(*opt).buff)) == NULL){
		fprintf(stderr,"[FAILED] malloc() @ SHLINK_POS @ main .\n");
		exit(1);
	}
	SHLINK_POS[0] = '\0';
	if((BUF_TMP = malloc((size_t)sizeof(char)*(*opt).buff)) == NULL){
		fprintf(stderr,"[FAILED] malloc() @ BUF_TMP @ main .\n");
		exit(1);
	}
	BUF_TMP[0] = '\0';

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
		if(PRINT_TRIG == 1){
			PTR_BACK = print_BUF_HEAD(BUF_HEAD,SHLINK_POS,BUF_TMP);
			BUF_PTR = PTR_BACK;
			BUF_HEAD[BUF_PTR+1] = '\0';
		}
		
		if(c == '\n'){
			//printf(";;;%s;;;","\n");
			printf("%s","\n");
			PRINT_TRIG_ACC = 1;
			PRINT_TRIG = 0;
			BUF_HEAD[0] = '\0';
			BUF_PTR = 0;
			(*SHLINK_POS) = 0;
			PTR_BACK = 0;
			BUF_TMP[0] = '\0';
		}
		
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
