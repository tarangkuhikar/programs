#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *fp,*feven,*fodd;
	int n;
	printf("write -1 in file to stop");
	fp=fopen("new.txt","r");
	feven=fopen("even.txt","w");
	fodd=fopen("odd.txt","w");
	
	do{
		n=getw(fp);
		printf("%d\n",n);
		if(n%2==0){
			putw(n,feven);
		}
		else{
			putw(n,fodd);
		}
	}while(n!=-1);
	
	fclose(fp);
	fclose(feven);
	fclose(fodd);
	
	feven=fopen("even.txt","r");
	fodd=fopen("odd.txt","r");
	
	printf("contents of odd file:\n");
	while((n=getw(fodd))!=EOF)
		printf("%d\n",n);
		
	printf("contents of even file:\n");
	while((n=getw(feven))!=EOF)
		printf("%d\n",n);
	
	fclose(fodd);
	fclose(feven);
	
	
	return 0;
}
