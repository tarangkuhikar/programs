#include<iostream>
using namespace std;
class rectangle{
	int w,h;
	public:
		void setvalue(int ww,int hh)
		{
			w=ww;
			h=hh;
			displayvalue();
			
		}
		void displayvalue()
		{
			cout<<"width="<<w;
			cout<<"\t height="<<h;
			
		}
};
 int main()
 {
 rectangle r1;
 r1.setvalue(1,2);
 r1.displayvalue();
 return 0;
 }
