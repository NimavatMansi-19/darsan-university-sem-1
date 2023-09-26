#include<stdio.h>
void main(){
	int i=1,sum=0,n,j;
	scanf("%d",&n);
	while(i<=n){
		j=i*i;
		sum=sum+j;
		i++;
	}
	printf("%d",sum);
	
}
