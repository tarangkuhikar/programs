#include<stdio.h>
#include<fact.h>
int main(){
    int n;

    n=fact(5);
    if(n==0){
    printf("enter a positive number");
    }
    else{
    printf("%d",n);
    }

    return 0;
}
