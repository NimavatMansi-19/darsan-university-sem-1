#include<stdio.h>
void main(){
	int i,x,y,pow=1;
	printf("Enter two no:");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		pow=x*pow;
	}printf("%d",pow);
}
