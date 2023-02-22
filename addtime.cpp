#include<iostream>
using namespace std;
class time{
	int hour,minute,seconds;
	public:
		void getTime(){
			cout<<"\n enter hours:";
			cin>>hour;
			cout<<"\n enter minutes:";
			cin>>minute;
			cout<<"\n enter seconds:";
			cin>>seconds;
		}
		 
		void printTime(){
			
			cout<<"\nhour:"<<hour;
			cout<<"\nminutes:"<<minute;
			cout<<"\nsecpnds:"<<seconds;
		}
		 void addTime(time x,time y){
		 	hour=x.hour+y.hour;
		 	minute=x.minute+y.minute;
		 	seconds=x.seconds+y.seconds;
		 }
	
};
 int main()
 {
 	time t1,t2,t3;
 	t1.getTime();
 	t1.printTime();
 	
 	t2.getTime();
 	t2.printTime();
 	
 	t3.addTime(t1,t2);
 	cout<<"\n after adding two objects:";
 	t3.printTime();
 	return 0;
 	
 }         
