#include<stdio.h>
void main(){
//	Calculate sum of two numbers using pointer.
     int x=10,*p1,y=5,*p2,sum;
     p1=&x;
     p2=&y;
     sum=*p1+*p2;
     printf("%d",sum);
}
     
