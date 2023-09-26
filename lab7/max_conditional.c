#include<stdio.h>
void main(){
	int a,b,c,max;
	 
	printf("Enter number1:");
	scanf("%d",&a);
    printf("Enter number2:");
	scanf("%d",&b);
	printf("Enter number 3:");
	scanf("%d",&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d",max);
}
