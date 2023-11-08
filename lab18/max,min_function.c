#include<stdio.h>
//Find maximum and minimum between two numbers using function.
void max(int a,int b){
	if(a>b){
		printf("max is%d",a);
	}else{
		printf("max is%d\n",b);
		
	}
}
void min(int a,int b){
	if(a>b){
		printf("min is%d\n",b);
	}else{
		printf("min is%d\n",a);
		
	}
}
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	min(a,b);
	max(a,b);
}
