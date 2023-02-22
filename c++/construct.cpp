#include<iostream>
using namespace std;
class  car{                                                         
	private:
		float mileage;
		public:
			car()
			{
				cin>>mileage;
			}
			void print(){
				cout<<mileage;
			}
};
int main()
{

car c1,c2;
c1.print();
c2.print();
return 0;
		 }
