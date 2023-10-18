#include<stdio.h>
void main(){
//	Swap value of two numbers using pointer.
     int x=10,*p1,y=5,*p2,temp;
     p1=&x;
     p2=&y;
     temp=*p1;
     *p1=*p2;
     *p2=temp;
     printf("x=%d\ny=%d",*p1,*p2);
}
     
