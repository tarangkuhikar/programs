#include<iostream>
using namespace std;
class car{
  private:
   float mileage;
  public:
    float updatemileage();
	void setdata();
};
	float car::updatemileage(){
		return mileage+2;
		
}
   void car:: setdata()
{
   	mileage=18.5;
}	
  int main()
  
  {
	car c1;
	c1.setdata();
	float ans=c1.updatemileage();
	//cout<<c1.updatemileage();
		   
	return 0;
}
