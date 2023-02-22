#include<stdio.h>
#include<stdlib.h>

int main(){
}
	FILE *fp;
	char c;
	printf("File Handling\n");
	
	fp=fopen("string_file.txt","w");
	
	while((c=getchar())!=EOF){
		putc(c,fp);
	}
	fclose(fp);
	
	
	printf("data entered:\n");
	fp=fopen("string_file.txt","r");
	while((c=getc(fp))!=EOF){
		printf("%c",c);
	}
	fclose(fp);
	return 0;
} 

//write a c program for following a file name new contains a series of numbers write a c programs to read all numbers from files and copy all odd numbers into file odd and write all even numbers into file name evenand display the content of the files            
