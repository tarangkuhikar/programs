#include<iostream>
using namespace std;
class rectangle{
	private:
		int height;
		int width;
		int area;
	public:
	  void setdata();
	  void area1();
	  void display();
	  				
};

void rectangle::setdata(){
	cout<<"enter height:";
	cin>>height;
	cout<<"enter width:";
	cin>>width;
	
}
void rectangle::area1(){
	area=width*height;
	
}
void rectangle::display(){
	cout<<"area of recatangle:"<<area;
	    
}

int main()
{
	class rectangle r;
	r.setdata();
	r.area1();
	r.display();
	return 0;
}
