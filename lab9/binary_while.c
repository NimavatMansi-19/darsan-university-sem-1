#include<stdio.h>
void main(){
	int n,a,b,sum=0;
	printf("Enter your number:");
	scanf("%d",&n);
	while(n){
	
	 a=n%2;
	 n=n/2;
	 printf("%d",a);
    }
}
