#include<iostream>
using namespace std;

class Test{
	
	private:
		int mark;
		float spi;
		
	public:
		
		void SetData(){
			cout<<"enter the marks:";
			cin>>mark;
			cout<<"enter the spi";
			cin>>spi;
		}
		
		void DisplayData(){
			cout<<"Mark="<<mark<<endl;
			cout<<"spi="<<spi;
		}
};

int main(){
	Test s1,s2,s3;
	s1.SetData();
	s2.SetData();
	s3.SetData();
	s1.DisplayData();
	s2.DisplayData();
	s3.DisplayData();
	
	
	return 0;
}
