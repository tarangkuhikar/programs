#include<iostream>
using namespace std;
class base{
	int val1,val2;
	public:
		void get()
		{
			cout<<" enter the two values:";
			cin>>val1>>val2;
		}
		friend float mean(base ob);
		
};
float mean (base ob)

{
	return float(ob.val1+ob.val2)/2;
}
int main()
{
base obj;
obj.get();
cout<<"/n mean value is:"<<mean(obj);
return 0;
}
