#include<stdio.h>
void main(){
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%2==0){
		printf("%d\n",a);	
		}
		
		a++;
	}
}
