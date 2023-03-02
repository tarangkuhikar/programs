//create employee struct with following members name id ,age ,gender and city
//write c program to get address of two structure variable using pointer

#include<stdio.h>


struct employee{
	char name[20];
	int id;
	int age;
	char gender[10];
	char city[20];
	
};

int main(){
	
	struct employee e1,e2,*ptr,*ptr1;
	ptr=&e1;
	ptr1=&e2;
	
	printf("enter the name");
	scanf("%s",&ptr->name);
	printf("enter id");
	scanf("%d",&ptr->id);
	printf("enter the age");
	scanf("%d",&ptr->age);
	printf("enter the gender");
	scanf("%s",&ptr->gender);
	printf("enter the city");
	scanf("%s",&ptr->city);
	
	printf("enter the name");
	scanf("%s",&ptr1->name);
	printf("enter id");
	scanf("%d",&ptr1->id);
	printf("enter the age");
	scanf("%d",&ptr1->age);
	printf("enter the gender");
	scanf("%s",&ptr1->gender);
	printf("enter the city");
	scanf("%s",&ptr1->city);
	
	return 0;
}
