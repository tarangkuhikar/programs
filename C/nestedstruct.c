#include<stdio.h>
#include<string.h>


struct person{
	char name[15];
	int age;
	char gender[10];
	struct address{
		char apartment[30];
		char street[30];
		char city[30];
		char state[30];
		int zipcode;
	}a[10];
}p[10];
int main(){
	int i;
	for(i=0;i<3;i++){
		printf("enter the %d name,age,gender",i+1);
		scanf("%s",&p[i].name);
		scanf("%d",&p[i].age);
		scanf("%s",&p[i].gender);
		printf("enter the apartment name of person %d\n",i+1);
		scanf("%s",p[i].a[i].apartment);
		printf("enter the street name of person %d\n",i+1);
		scanf("%s",p[i].a[i].street);
		printf("enter the city name of person %d\n",i+1);
		scanf("%s",p[i].a[i].city);
		printf("enter the state name of person %d\n",i+1);
		scanf("%s",p[i].a[i].state);
		printf("enter the zipcode name of person %d\n",i+1);
		scanf("%d",&p[i].a[i].zipcode);
	}
	
	for(i=0;i<3;i++){
		printf("name:%s   age:%d   gender:%s   apartment:%s   street:%s   city:%s   state:%s   zipcode:%d\n",p[i].name,p[i].age,p[i].gender,p[i].a[i].apartment,p[i].a[i].street,p[i].a[i].city,p[i].a[i].state,p[i].a[i].zipcode);
	}
	
	
	return 0;
}
