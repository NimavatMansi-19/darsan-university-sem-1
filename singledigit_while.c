#include<stdio.h>
void main(){
     int a,i=1,n,x;
     printf("Enter your no:");
     scanf("%d",&a);
     while(i<=a){
                 n=a%10;
                 a=a/10;
                 printf("%d\n ",n);
                 
                 i++;
     }
     getch();
}
