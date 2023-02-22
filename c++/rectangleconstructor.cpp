#include<iostream>
using namespace std;
class rectangle{
	int width,height;
	public:
		rectangle(){
			width=5;
			height=6;
			cout<<"constructor called";
			
		}
		void print()
		{
			cout<<width<<" "<<height;
		}
};

int main()
{
	rectangle r1;                                             
	r1.print();
	return 0;
}

