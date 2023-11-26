#include<stdio.h>
void main(){
     FILE *f;
     int i=1,j=2,k=3,num;
     f=fopen("test.txt","w");
     putw(i,f);
     putw(j,f);
     putw(k,f);
     fclose(f);
      f=fopen("test.txt","r");
      num=getw(f);
                          
      while(num!=EOF){
                          printf("%d",num);
      
                          num=getw(f);
                          }
      fclose(f);
      getch();
}
                          
    
     
