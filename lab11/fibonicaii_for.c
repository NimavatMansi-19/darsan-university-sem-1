#include<stdio.h>
void main(){
	//fibonicaii series 0+1=1,1+1=2,1+2=3.....
	int i,n,a=0,b=1,c;
	scanf("%d",&n);
	printf("%d,%d,",a,b);
	for(i=1;i<=n;i++){
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
	
}
