//using a structure with an array

#include<stdio.h>

struct student{
	int roll;
	char name[10];
}; 

int main(){
	struct student s1[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("enter your roll no\n");
		scanf("%d",&s1[i].roll);
		printf("enter your name\n");
		scanf("%s",&s1[i].name);
	}
	
	for(i=0;i<5;i++){
		printf("roll no:%d  name:%s\n",s1[i].roll,s1[i].name);
		}
	
	return 0;
}
