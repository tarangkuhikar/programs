#include<stdio.h>

struct person{
	int age;
	float weight;
};

int main(){
	struct person person1,*personptr;
	personptr=&person1;
	
	printf("enter the age");
	scanf("%d",&personptr->age);
	printf("enter weight");
	scanf("%f",&personptr->weight);
	printf("age:%d",personptr->age);
	printf("weight:%f",personptr->weight);
	
	return 0;
}


//create employee struct with following members name id ,age ,gender and city
//write c program to get address of two structure variable using pointer
