#include<iostream>
using namespace std;
class Rectangle{
	int l,w;
	public:
		Rectangle(){    //constructor
			l=0;
			w=0;
		}
		~Rectangle(){  //distructor
			cout<<"Distructor called";
		}
		//other function are readind writin here
};
	Rectangle r1;                                                      
	//default costructor  called
	return 0;
}
