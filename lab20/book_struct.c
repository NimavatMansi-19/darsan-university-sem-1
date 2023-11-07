#include<stdio.h>
//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.
struct book{
	char title[30],author[30],pub[30];
	int price;
	
};
void main(){
	struct book b1,b2,b3;
	printf("Enter detail of book 1:");
	scanf("%s %s %s %d",b1.title,b1.author,b1.pub,&b1.price);
	printf("Enter detail of book 2:");
	scanf("%s %s %s %d",b2.title,b2.author,b2.pub,&b2.price);
	printf("Enter detail of book 3:");
	scanf("%s %s %s %d",b3.title,b3.author,b3.pub,&b3.price);
	printf("Title:%s\nauthor:%s\npublication:%s\nprice:%d\n",b1.title,b1.author,b1.pub,b1.price);
	printf("Title:%s\nauthor:%s\npublication:%s\nprice:%d\n",b2.title,b2.author,b2.pub,b2.price);
	printf("Title:%s\nauthor:%s\npublication:%s\ngprice:%d",b3.title,b3.author,b3.pub,b3.price);
}
