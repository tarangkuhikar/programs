#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *f1,*f2,*f3;
	
	int n,i;
	printf("enter numbers in new enter -1 to stop");
	f1=fopen("new.txt","w");
	
    for(i=0;i<=10;i++){
    	
    	scanf("%d",&n);
    	if(n==-1){
    		break;       
		}
		putw(n,f1);
	}
	fclose(f1);
	
	f1=fopen("new.txt","r");
	f2=fopen("odd.txt","w");
	f3=fopen("even.txt","w");
	
	while((n=getw(f1))!=EOF){
		
		if(n%2==0){
            putw(n,f3);
			
		}
  		else{
		  putw(n,f2);
        }
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	f2=fopen("odd.txt","r");
	f3=fopen("even.txt","r");
	
	printf("contents of odd file:\n");
	while((n=getw(f2))!=EOF)
		printf("%d\n",n);
		
	printf("contents of even file:\n");
	while((n=getw(f3))!=EOF)
		printf("%d\n",n);
	
	fclose(f2);
	fclose(f3);
	
	return 0;
}
