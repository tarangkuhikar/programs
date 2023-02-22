#include<stdio.h>
#include<string.h>

struct Books{
	char title[20];
	char author[20];
	char subject[20];
	int book_id;
};               
  //printf("%s \n%s \n%s \n%d\n",Book2.title,Book2.author,Book2.subject,Book2.Book_id);
	
int main(){
	struct Books Book1;
	
	printf("Enter Book title:");
	gets(Book1.title);
	printf("Enter Book author:");
	gets(Book1.author);
	printf("Enter Book subject:");
	gets(Book1.subject);
	//printf("Enter Book id:");
	//scanf("%d",Book1.book_id);
	printf("%s \n%s \n%s \n%d\n",Book1.title,Book1.author,Book1.subject,Book1.book_id);

/*	printf("Enter Book title:");
	gets(Book2.title);
	printf("Enter Book author:");
	gets(Book2.author);
	printf("Enter Book subject:");
	gets(Book2.subject);
	printf("Enter Book id:");
	scanf("%d",Book2.book_id);
*/	
	return 0;
}
