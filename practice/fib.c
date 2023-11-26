#include<stdio.h>
int fib(int);
void main(){
     int n=5,m=0,f,i;
     f=fib(n);
     prinf("ans is:");
     for(i=1;i<=n;i++){
                       printf("%d",f);
                       m++;
                       }
                       getch();
}
int fib(n){
    if(n==0  || n==1){
             return 1;
             }
    else{
         return fib(n-1)+fib(n-2);
         }
}
