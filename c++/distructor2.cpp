#include<iostream>
using namespace std;
class Marks{
	int maths,science;
	public:
	//constructor
	
	Marks(){
		cout<<"Inside Constructor"<<endl;
		cout<<"C++ object created"<<endl;
	}
	//Disatructor
	~Marks(){
		cout<<"Inside Distructor"<<endl;
		cout<<"C++ object Distructed"<<endl;
	}
};
int main(){
	Marks m1;
	cout<<"For m2"<<endl;
	Marks m2;
	return 0;
}
