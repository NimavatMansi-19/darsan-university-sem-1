#include<stdio.h>
void main(){
	// using bitwise (left and right shift) multi and div by 2 
	int a,b;
	printf("Enter your number which you want to multiply with 2:");
	scanf("%d",&a);
	a=a<<1;
	printf("%d\n",a);
	
	printf("Enter your number which you want to divide with 2:");
	scanf("%d",&b);
	b=b>>1;
	printf("%d",b);
}
