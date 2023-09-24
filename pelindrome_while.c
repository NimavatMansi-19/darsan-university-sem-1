#include<stdio.h>
void main(){
     int a,i=1,temp=a,r=0;
     scanf("%d",&a);
     while(a!=0){
                 i=a%10;
                 r=r*10+i;
                 a=a/10;
                 
     }printf("%d",r);
     if(temp==r){
              printf("pelindrome");
     }else{
           printf(" Not pelindrome");
     }
     getch();
} 
                 
     
