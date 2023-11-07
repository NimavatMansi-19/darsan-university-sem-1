#include<stdio.h>
//Create, declare and initialize structure employee
struct emp{
	char name[30];
	int age;
	int exp;
};
void main(){
	struct emp e1,e2;
	printf("Enter employee1's detail:");
	scanf("%s %d %d",e1.name,&e1.age,&e1.exp);
	printf("Enter employee2's detail:");
	scanf("%s %d %d",e2.name,&e2.age,&e2.exp);
	printf(" name:%s\n age:%d\n exp:%d\n",e1.name,e1.age,e1.exp);
	printf("name:%s\n age:%d\n exp:%d",e2.name,e2.age,e2.exp);
	
}
