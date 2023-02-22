//familiarizing with realloc function


#include<stdio.h>
#include<stdlib.h>

int main(){
		
	int i,n,*ptr,sum=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	
	if(ptr==NULL){
		printf("memory error");
		exit(0);
	}
	
	for(i=0;i<n;i++){
		ptr[i]=i+1;
 }
    for(i=0;i<n;i++){
		printf("%d",ptr[i]);
 }
 
    n=10;
	
	ptr=realloc(ptr,n*sizeof(int));
	
	if(ptr==NULL){
		
		printf("memory error");
		exit(0);
	}
	
	for(i=0;i<n;i++){
		ptr[i]=i+1;
 }
 
    for(i=0;i<n;i++){
		sum+=*(ptr+i);
 }
	printf("\nsum is %d",sum);
	free(ptr);
	return 0;
}
