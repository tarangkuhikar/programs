 #include<iostream>
 using namespace std;
 class demo{
 	int m,n;
 	public:
 		demo(int x, int y){
 			m=x;
 			n=y;
 			cout<<"Parameterized Constructor"<<endl<<m<<"\t"<<n<<endl
			 ;
		 }      
       demo(demo &x){
       	m=x.m;
       	n=x.n;
       	cout<<"Copy Constructor"<<endl<<m<<"\t"<<n<<endl;
	   }
 };
 int main(){
 	demo obj1(5,6);
 	demo obj2(obj1);//implicit 
 	demo obj3=obj2; //explicit
 	return 0;
 }
 
 
