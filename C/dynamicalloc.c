//how to dynamically allocate memory

#include<stdio.h>
#include<stdlib.h>


int main(){
	
	char *ptr=(char *)malloc(sizeof(char));
	
	if(ptr==NULL){
	    printf("memory error!\n");
		exit(0);
	}

	*ptr='s';
    printf("%c",*ptr);

	return 0;
}
