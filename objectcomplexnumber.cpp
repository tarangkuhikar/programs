#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		void setdata(){
			cout<<"enter the real numbers:";
			cin>>real;
			cout<<"enter the img numbers:";
			cin>>img;
		}
		 void print()
		 {
		 	cout<<"real:"<<real<<"img:"<<img<<endl;
		 }
		  complex adddata(complex x,complex y)
		  {
		  	complex c4;
		  	c4.real=x.real+y.real;
		  	c4.img=x.img+y.img;
		  	return c4;
		  }
		
};
int main()
{
	complex c1,c2,c3,ans;
	c1.setdata();
	c1.print();
	
	c2.setdata();
	c2.print();
	
	ans=c3.adddata(c1,c2);
	cout<<"\n after adding number:";
	ans.print();
	return 0;
}
