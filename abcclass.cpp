#include<iostream>
using namespace std;
class XYZ; // forward declaration
class ABC{
	private:
		int numA;
		public:
			void setdata (){
				numA=10;
			}
			friend int add(ABC,XYZ);
};
class XYZ{
	int numB;
	public:
			void setdata (){
				numB=20;
			}
			friend int add(ABC,XYZ);
}; 
	 
int add (ABC objA,XYZ objB){
	return(objA.numA + objB.numB);
}
int main()
{
	ABC o1;
	XYZ o2;
	o1.setdata();
	o2.setdata();
	cout<<"sum"<<add(o1,o2);
	return 0;
}
                        
