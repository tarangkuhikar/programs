#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
		void getdata(){
			cout<<"enter value of x&y:";
			cin>>x>>y;
		}
};
class B:public A{
	public:
		void product(){
			cout<<"\nproduct="<<x*y<<endl;
		}
};
class C:public A{
	public:
		void sum(){
			cout<<"sum="<<x+y<<endl;
		}
		
};
class D:public A{
	public:
		void division(){
			cout<<"dividion="<<x/y<<endl;
		}
};
class E:public A{
	public:
	void subtraction(){
		cout<<"subtraction="<<x-y<<endl;
		
	}
	
};
class F : public A{
	int l;
	public:
	void area(){
		cout<<"enter length=";
		cin>>l;
		cout<<"l*l"<<endl;
		
	}
};
int main(){
	C o1;
	B o2;
	D o3;
	E o4;                                                     
	F o5;
	o1.getdata();
	o1.sum();
	o2.getdata();
	o2.product();
	o3.getdata();
	o3.division();
	o4.getdata();
	o4.subtraction();
	o5.getdata();
	o5.area();
	return 0;
}
