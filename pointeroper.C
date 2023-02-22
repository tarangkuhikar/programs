#include<stdio.h>
#include<conio.h>

void main(){
    int *p1,*p2,*p3;

    char oper;
    clrscr();
printf("enter two values and operation");
    scanf("%d %d %c",p1,p2,&oper);


   switch(oper){
    case '*':
    printf("%d*%d=%d",*p1,*p2,*p1*(*p2));
    break;
    case '+':
    printf("%d+%d=%d",*p1,*p2,(*p1+*p2));
    break;
    case '-':
    printf("%d-%d=%d",*p1,*p2,*p1-*p2);
    break;
    case '/':
    printf("%d/%d=%d",*p1,*p2,*p1/(*p2));
    break;
 }


    getch();
    }