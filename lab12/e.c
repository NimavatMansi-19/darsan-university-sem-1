#include<stdio.h>
void main(){
	int i,j,n,fact=1;
	float sum=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
			fact=fact*i;
			

		 	sum=sum+(1.0/fact);
		
	}
	printf("\n%f",sum);
}
