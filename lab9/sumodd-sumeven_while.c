#include<stdio.h>
void main(){
	int n,i=1,sumodd=0,sumeven=0,x;
	printf("Enter your number:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			sumeven=sumeven+i;
		}else{
			sumodd=sumodd+i;
		}
		i++;
		
	}
	x=sumodd-sumeven;
	printf("%d",x);
}
