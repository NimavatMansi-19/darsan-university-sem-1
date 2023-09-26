#include<stdio.h>
void main(){
	//+ve and -ve
	int a;
	printf("enter no:");
	scanf("%d",&a);
	
	if(a>=0){
		if(a==0){
			printf("no is 0");
		
		}else{
			printf("no is positive");
		}
	}else{
		printf("no is negative");
	}
}
