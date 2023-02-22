#include<iostream>
using namespace std;
class item{
	int number;
	static int count;//static variable declaration
	public:
		void getdata(int a){
			number=a;
			count++;
		}
		static void getcount(){
			cout<<"value of count"<<count;
			//cout<<"value of number"<<number;
			
			
		}
		
};
int item::count;
int main()
{
	item i1,i2,i3;
	
	i1.getdata(100);
	item::getcount();
	
	i2.getdata(200);
	item::getcount();
	
	i3.getdata(300);
	item::getcount();
	return 0;
	
}
