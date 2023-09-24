#include<stdio.h>
void main(){
     int a,sum=0,n=0;
     float avg;
     while(a!=0){
                 scanf("%d",&a);
                 sum=sum+a;
                 if(a==0){
                      n=n;
                 }else{
                       n=n+1;
                 }
                 avg=sum/n;
     }
     printf("sum is:%d",sum);
     printf("avg is :%f",avg);
     getch();
} 
