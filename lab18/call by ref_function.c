#include<stdio.h>
//Swap two numbers using call by value and call by reference

void swapr(int*,int*);

void main(){
	int x=10,y=20;
	
	
	swapr(&x,&y);
	printf("a=%d b=%d",x,y);
}

	

void swapr(int* x,int* y){
	int t;
 
    t = *x;
    *x = *y;
    *y = t;
}

