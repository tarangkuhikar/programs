#include<iostream>
using namespace std;

class sum{
	public:
		void sumof(int n1,int n2)
		{
			cout<<n1<<"+"<<n2<<"="<<n1+n2;
		}
};
class sub{
	public:
	 void sumof(int n1, int n2)
	 {
	  cout<<n1<<"-"<<n2<<"="<<n1-n2;	
	 }
};
class multiply{
	public:
	 void sumof(int n1,int n2)
	 {
	  cout<<n1<<"*"<<n2<<"="<<n1*n2;	
	 }
};
class cal:public sum{

	public:
	 	
};
int main()
{
	cal c;
	int n1,n2;
	char exp;
	cout<<"Enter the number:";
			cin>>n1;
			cin>>exp;
			cout<<"enter the number:";
			cin>>n2;
	cin>>n1;
	cin>>exp;
	cin>>n2;
	switch(exp)
	{
		case '+':
			c.sumof(n1,n2);
			  break;
		}
			
			
				
	
	
	return 0;
}
