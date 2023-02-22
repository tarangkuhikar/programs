#include<stdio.h>

int main(){
	FILE *fp;
	char c;
	fp=fopen("wandr.c","r");
	while((c=getc(fp))!=EOF){
		printf("%c",c);
	}
	fclose(fp);
	return 0;
	
}
