#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char exp[20],num2[20],buffer[20],num1,express;
	int i=0,n1,n2;
	
	gets(exp);
	
    n1=atoi(exp);
    num1=strlen(itoa(n1,buffer,10));
    
    express=exp[num1];
    while(exp[num1]!=NULL){
    	num2[i]=exp[num1+1];
    	i++;
    	num1++;
    	
}

	n2=atoi(num2);
	switch(express){
		case '+':
			printf("=%d",n1+n2);
			break;
		case '-':
			printf("=%d",n1-n2);
			break;
		case '*':
			printf("=%d",n1*n2);
			break;
		case '/':
			printf("=%f",n1/n2);
			break;	
		case '%':
			printf("=%d",n1%n2);
			break;
		default:
			printf("enter valid operation");	
	}
	return 0;
}
