#include<stdio.h>
void main(){
	// last no odd or even 
	int a,c;
	printf("Enter your number :");
	scanf("%d",&a);
	c=a%10;
	if((c%2)==0)
	{
		printf("last digit is is even:%d",c);
	}else{
		printf("last digit is odd:%d",c);
	}
}
