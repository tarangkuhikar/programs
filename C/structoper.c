#include<stdio.h>
struct employee{
	int id;
	char name[15];
}e1={1,"Abhay"};
int main(){
	struct employee e2;
	e2=e1;
	return 0;
}
