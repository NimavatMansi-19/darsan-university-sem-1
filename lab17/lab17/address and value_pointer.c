#include<stdio.h>
void main(){
//	Print value and address of a variable
     int x=10,*p;
     p=&x;
     printf("address=%d,value=%d",p,*p);
}
