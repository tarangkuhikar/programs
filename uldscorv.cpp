#include<iostream>
using namespace std;

int main(){
	char c;
	cout<<"enter the character"<<endl;
	cin>>c;
	if(c>=65&&c<=90){
        cout<<"uppercase"<<endl;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        	cout<<"vowel";
		}
		else{
			cout<<"consonant";
		}
	}
	else if(c>=97&&c<=122){
		cout<<"lowercase"<<endl;
		 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        	cout<<"vowel";
		}
		else{
			cout<<"consonant";
		}
	}
	else if(c>=48&&c<=57){
		cout<<"digit";
	}
	else{
		cout<<"Special Character";
	}
	
	return 0;
}
