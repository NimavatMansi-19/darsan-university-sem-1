#include<stdio.h>
void main(){
	int a,b;
	char c;
	 
	float d;
	printf("Enter number1:");
	scanf("%d",&a);
    printf("Enter number2:");
	scanf("%d",&b);
	printf("Enter a for add,s for sub,m for multi,d for divide:");
	scanf(" %c",&c);
	switch(c){
		case 'a':d=a+b;
		         printf("Ans is:%f",d);
		         break;
	    case 's':d=a-b;
		         printf("Ans is:%f",d);
		         break;
	    case 'm':d=a*b;
		         printf("Ans is:%f",d);
		         break;
		case 'd':d=a/b;
		         printf("Ans is:%f",d);
		         break;
		default:printf("Invalid input");
		        break;
    }
}
