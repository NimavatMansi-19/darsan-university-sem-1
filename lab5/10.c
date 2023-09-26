#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter no:");
	scanf("%d",&a);
	printf("enter no:");
	scanf("%d",&b);
	printf("enter no:");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("a is largest");
		
		}else{
			printf("c is largest");
		}
	}else if(b>c){
		printf("b is largest");
	}else{
		printf("c is largest");
	}
}
