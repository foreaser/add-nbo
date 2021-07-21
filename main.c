//main.c
#include "main.h"

int main(int argc, char *argv[]){

	FILE *fp1;
	FILE *fp2;
	uint32_t num1;
	uint32_t num2;	
	uint32_t result;
	fp1 = fopen(argv[1],"rb");
	fp2 = fopen(argv[2],"rb");

	fread(&num1,sizeof(uint32_t),1,fp1);
	fread(&num2,sizeof(uint32_t),1,fp2);
	
	num1 = ntohl(num1);
	num2 = ntohl(num2);

	add(num1, num2);
	
	fclose(fp1);
	fclose(fp2);
	return 0;

}


