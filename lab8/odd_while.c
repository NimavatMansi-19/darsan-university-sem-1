#include<stdio.h>
void main(){
	int a=10,i=1,n,j=1;
	// 1 to 10 odd
	while(i<=a)
	{
		printf("%d\n",i);
		i=i+2;
	}
	// 1 to n odd
	printf("Enter value of n:");
	scanf("%d",&n);
	while(j<=n){
		printf("%d\n",j);
		j=j+2;
	}
}
