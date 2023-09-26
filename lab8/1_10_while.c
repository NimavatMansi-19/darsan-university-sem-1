#include<stdio.h>
void main(){
	int a=10,i=1,n,j=1;
	// 1 to 10
	while(i<=a)
	{
		printf("%d\n",i);
		i++;
	}
	// 1 to n
	printf("Enter value of n:");
	scanf("%d",&n);
	while(j<=n){
		printf("%d\n",j);
		j++;
	}
}
