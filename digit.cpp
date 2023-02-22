#include<iostream>
using namespace std;
int main(){
	
	int n,rem,count=0;
	
	cout<<"enter your number";
	cin>>n;
	
	
	while(n!=0){
		rem=n%10;
		count++;
		n=n/10;
		
	}
	cout<<"the number of digits in your number is"<<count;
	
	return 0;
}
