//structure inside an structure

#include<stdio.h>

struct complex{
	int image;
};

struct number{
	struct complex com;
	int count;
}num1;

void main(){
	num1.com.image=123;
}


