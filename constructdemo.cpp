#include<iostream>
using namespace std;
class rectangle{
	int width,height;
	public:
		rectangle(int x,int y)
		{
			width=x;
			height=y;
			cout<<"constructor called"<<endl;
			}
			void print(){
				cout<<width<<" "<<height;
			}
		
		
};
int main()
{
	rectangle r(5,6);//implicit
	rectangle r2=rectangle(10,20);//explicit
	r.print();
	r2.print();
	return 0;
}
