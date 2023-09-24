#include<stdio.h>
void main(){
     int a,i=1,count=0;
     scanf("%d",&a);
     while(i<=a){
                 if(a%i==0){
                            count=count+1;
                            }
                                  i++;
     }
     if(count==2){
                  printf("Prime");
     }else{
           printf("Not prime");
     }
                            
                            getch();
}
                 
