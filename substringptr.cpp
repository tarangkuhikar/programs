#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
  int a,b,i;
  char str []="\nmansi";
  int len =strlen(str);
  char *s=new char[len];
  cout<<"main string will be:"<<str;
  cout<<"the substring to be searched=";
  cin>>s;
  int k,len2=strlen(s);
  for( i=0;i<len;i++);
  {
  	for (int j=0;j<len;j++)
  	{
  		if(str[k]==s[j])
		  {
  			
  			if(j==len2-1){
  				cout<<"the substring is present";
  				getch();
  				exit(0);
			  }
			  k++;
			
		  }
		  else{
		  	break;
		  }
	  }
  }
  if(i==len){
  	cout<<"the substring is not found";
  	getch();
  }
  return 0;	
}
