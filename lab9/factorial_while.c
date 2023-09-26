#include<stdio.h>
void main(){
	int x,i=1,ans=1;
	printf("Enter your number:");
	scanf("%d",&x);
	while(i<=x){
		ans=ans*i;
		i++;
	}printf("%d",ans);
}
