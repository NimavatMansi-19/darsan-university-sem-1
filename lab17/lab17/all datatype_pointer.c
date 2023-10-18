#include<stdio.h>
void main(){
//	Demonstrate int, float, double and char pointer
     int x=10,*pi;
     char y='A',*pc;
     float z=5.5,*pf;
     double a=5.56,*pd;
     
     pi=&x;
     pc=&y;
     pf=&z;
     pd=&a;
     printf("address=%d,value=%d",pi,*pi);
     printf("\naddress=%d,value=%c",pc,*pc);
     printf("\naddress=%d,value=%f",pf,*pf);
     printf("\naddress=%d,value=%lf",pd,*pd);
    
     
}
