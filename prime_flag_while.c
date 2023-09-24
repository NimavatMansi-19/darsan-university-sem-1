#include<stdio.h>
void main(){
     int a,i=1,flag=0;
     scanf("%d",&a);
     while(i<=a){
                 if(a%i==0){
                            flag=flag+1;
                            }
                                  i++;
     }
     if(flag==2){
                  printf("Prime");
     }else{
           printf("Not prime");
     }
                            
                            getch();
}
                 
