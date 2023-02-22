#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<"the biggest number is "<<a;
		}
		else{
			cout<<"the biggest number is "<<c;
		}
	}
	else{
		 if(b>c){
		 	cout<<"the biggest number is "<<b;
		 }
		else{
			cout<<"the biggest number is "<<c;
		}
	}
	
	return 0;
}
