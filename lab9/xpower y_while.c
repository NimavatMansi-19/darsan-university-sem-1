#include<stdio.h>
void main(){
	int x,y,i=1,ans=1;
	printf("Enter your number:");
	scanf("%d",&x);
	printf("Enter your number:");
	scanf("%d",&y);
	while(i<=y){
		ans=ans*x;
		i++;
	}
	printf("%d",ans);
}
