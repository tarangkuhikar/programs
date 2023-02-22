//write a porgram to  find largest among two number in nesting
#include<iostream>
using namespace std;
class largest{
	int a,b;
	public:
		void getdata(){
			cout<<"enter number 1:";
			cin>>a;
			cout<<"enter number 2:";
			cin>>b;
			compare(a,b);
			
		}
		void compare(int a, int b){
			if(a>b)
			{
				cout<<"\n enter 1 is greater:";
				
			}
			else{
				cout<<"\n enter 2 is greater:";
			}
		}
};
int main()
  {
  	largest l1;
  	l1.getdata();
  	return 0;
  }
