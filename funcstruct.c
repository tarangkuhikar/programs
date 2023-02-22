//using strusture as function return type

#include<stdio.h>

struct wage{
	char name[50];
	int rs;
};
struct wage employee();
int main(){
	
	struct wage e;
	e=employee();
	printf("name is:%s",e.name);
	printf("your wage is:%d",e.rs);
	
	return 0;
}

struct wage employee(){
	struct wage e1;
	printf("enter your name");
	scanf("%s",e1.name);
	printf("Enter your salary");
	scanf("%d",&e1.rs);
	return e1;
}
