//using calloc for summing elements

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,i,sum=0,*ptr;
	printf("enter number of elements:");
	scanf("%d",&n);
	
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL){
		
		printf("Memory error\n");
		exit(0);
	}
	
	printf("enter elements");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("sum is %d",sum);
	
	free(ptr);
	return 0;
}
