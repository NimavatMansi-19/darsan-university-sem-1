#include<stdio.h>
//Swap two numbers using call by value and call by reference
void swapv(int,int);
void swapr(int*,int*);

void main(){
	int a=10,b=20;
	
	swapv(a,b);
	printf("\na=%d b=%d",a,b);
	swapr(&a,&b);
	printf("a=%d b=%d",a,b);
}
void swapv(int x,int y){
	int t=x;
	x=y;
	y=t;
	
	
}
void swapr(int* x,int* y){
	int t;
 
    t = *x;
    *x = *y;
    *y = t;
}

