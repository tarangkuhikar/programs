//using a structure

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee{
    char name[50];
    int id;
}e1;

void main(){

    clrscr();
    e1.id=64;
    strcpy(e1.name,"tarang");
    printf("%d",e1.id);
    printf("\n%s",e1.name);
    getch();
}
