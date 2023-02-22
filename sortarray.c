//sort your array

#include<stdio.h>


int main(){
	
	int a[20],n,i,j,k;
	
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter your numbers");
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
		if(a[j+1]<a[j]){
			k=a[j+1];
			a[j+1]=a[j];
			a[j]=k;
		}
		}
		
	}
	
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	return 0;
	
}
