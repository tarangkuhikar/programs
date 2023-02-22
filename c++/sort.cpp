//write a c program to find the smallest element of array using pointer

#include<stdio.h>

int main(){
	int i;
	int a[10]={32,544,66,64,23,7566,23,99,123,23};
	int *p=a;
	int *small=a;
	for(i=0;i<10;i++){
		
		if(*small>*(p+i)){
			small=&a[i];	
		}
		
	}
	printf("smallest value is :%d",*small);	
	
	return 0;
}
