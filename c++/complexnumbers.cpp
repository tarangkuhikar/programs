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
		  void adddata(complex x,complex y)
		  {
		  	real=x.real+y.real;
		  	img=x.img+y.img;
		  }
		
};
int main()
{
	complex c1,c2,c3;
	c1.setdata();
	c1.print();
	
	c2.setdata();
	c2.print();
	
	c3.adddata(c1,c2);
	cout<<"\n after adding number:";
	c3.print();
	return 0;
}
