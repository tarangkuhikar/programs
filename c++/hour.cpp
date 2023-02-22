#include<iostream>
using namespace std;
class time{
	int hour,minute,second;
	public:
		void gettime(){
			cout<<"\n enter the hour:";
			cin>>hour;
			cout<<"\n enter the minute:";
			cin>>minute;
			cout<<"\n enter the seconds:";
			cin>>second;
		}
		void printtime(){
			cout<<"\nhour:"<<hour;
			cout<<"\nminute:"<<minute;
			cout<<"\nsecond:"<<second;
		}                             \
		time addtime(time t1,time t2){
			time t4;
			t4.hour=t1.hour+t2.hour;
			t4.minute=t1.minute+t2.minute;
			t4.second=t1.second+t2.second;
			 return t4;
			
		}
		
};
int main()
{
	time t1,t2,t3,ans;
	t1.gettime();
	t1.printtime();
	
	t2.gettime();
	t2.printtime();
	
	ans=t3.addtime(t1,t2);
	ans.printtime();
	return 0;
}

