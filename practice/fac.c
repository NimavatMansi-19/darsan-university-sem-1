#include<stdio.h>
int fac(int);
void main(){
     int n=5,f;
     f=fac(n);
     printf("%d",f);
     getch();
}
int fac(n){
    if(n==0){
             return 1;
             }
    else{
         return n*fac(n-1);
         }
}
