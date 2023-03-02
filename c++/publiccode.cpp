#include<iostream>
using namespace std;
class employee{
	private:
		char name[30];
		int salary,age;
		
	public:
		void setdata()
		{
			cout<<"enter the employee name:";
			cin>>name;
			cout<<"enter the salary:";
			cin>>salary;
			cout<<"enter the age:";
			cin>>age;
		}
		  void displaydata()
		  {
		  	cout<<"Name"<<name<<"salary"<<salary<<"age"<<age<<endl;
		  	
		  }
};
int main()
{
  employee e1,e2;
  e1.setdata();
  e2.setdata();
  e1.displaydata();
  e2.displaydata();	
	return 0;	
}
