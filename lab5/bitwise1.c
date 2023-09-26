#include<stdio.h>
void main(){
	// using bitwise odd even 
	int a;
	printf("Enter your number :");
	scanf("%d",&a);
	if(a&1==1)
	{
		printf("a is odd",a);
	}else{
		printf("a is even\n",a);
	}
}
	
	
