#include<stdio.h>

struct Vehicle{
	int wheels;
	char vname[20];
	char color[10];
	}v1={4,"Maruti 800","White"};

int main(){
	printf("vehicle No of wheels:%d",v1.wheels);
	printf("\nvehicle name:%s",v1.vname);
	printf("\nvehicle color:%s",v1.color);
	return 0; 
}
