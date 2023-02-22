#include<iostream>
using namespace std;
class time
{
	private:
	int hour,min,seconds;
	
	public:
		void settime (int h,int m,int s);
		void print();
		
};
	void time::settime(int h,int m,int s){
		hour=h;
		min=m;
		seconds=s ;
	}
	  void time::print(){
	  	cout<<hour<<":"<<min<<":"<<seconds;
	  	
}
 int main()
 {
 	class time t;
 	int h,m,s;
 	cout<<"enter hour:";
 	cin>>h;
 	cout<<"enter minutes:";
 	cin>>m;
 	cout<<"enter seconds:";
 	cin>>s;
 	t.settime(h,m,s);
 	t.print();
 	return 0;
 }                                        
