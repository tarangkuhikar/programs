#include<stdio.h>

int main(){
	
	int *p,sum=0,i;
	int x[5]={3,5,2,66,7};
	p=x;
	i=0;
	
    do
	{
		printf("x[%d] %d %u\n",i,*(p+i),p+i);
		sum=sum+*(p+i);
		i++;
	
	}while(i<5);
	
	printf("\n sum=%d\n",sum);
	printf("\n &x[0]=%u\n",&x[0]);
	printf("\n &x[0]=%u\n",p);    
	return 0;
}
