#include<iostream>
using namespace std;
class Rectangle{
	int l,w;
	public:
		Rectangle(){    //default
			l=0;
			w=0;
			cout<<"Default  Constructor"<<endl<<l<<"\t"<<w<<endl;
		}
		Rectangle(int x,int y){  //parameterized
			l=x;
			w=y;
				cout<<"Parameterized Constructor"<<endl<<l<<"\t"<<w<<endl;
		}
		Rectangle(Rectangle &r){ //copy
			l=r.l;
			w=r.w;
			cout<<"Copy Constructor"<<endl<<l<<"\t"<<w<<endl;
		}
};
int main(){
	Rectangle r1;
	Rectangle r2(5,6);
	Rectangle r3(r2);
	Rectangle r4=r2;
	return 0;
}
