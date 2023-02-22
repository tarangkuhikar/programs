#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num;
	
	FILE *fptr;
	
	fptr=fopen("number_file.txt","a");
	if(fptr==NULL){
		printf("error!!!!!!");
		exit(1);
	}
	
	printf("enter a number");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);	
	return 0;
}


