#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"this is  a vehicle class"<<endl;
			
		}
};
class car:public vehicle
{
	public:
		car(){
		
		cout<<" class cars"<<endl;
						   }
};
class racing
{
	public:
		racing()
		{
			cout<<"class racing"<<endl;
		}
};
class bmw:public car,public racing

{
	public:
		bmw()
		{
			cout<<"this is a racing car"<<endl;
		}
};
int main()
{
	bmw b1;
	return 0;
	
}

