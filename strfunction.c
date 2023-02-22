//using structure members as function arguments

#include<stdio.h>

struct student{
	int roll;
	float per;
	char name[20];
};

void display(char name[20],int a,float b);

int main()
{
	struct student s1;
	printf("enter student name");
	scanf("%s",&s1.name);
	printf("enter roll number:\n");
	scanf("%2d",&s1.roll);
	printf("enter percentage\n");
	scanf("%f",&s1.per);
	display(s1.name,s1.roll,s1.per);
	
	return 0;
}

void display(char name[20],int a,float b){
	
	printf("name:%s\n",name);
	printf("Roll. no%d\n",a);
	printf("percentage:%f\n",b);	
}
