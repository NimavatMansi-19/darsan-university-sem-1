#include<stdio.h>
void main(){
     FILE *f;
     f=fopen("int.txt","r");
     int i;
     i=getw(f);
     while(i!=EOF){
                   printf("%d",i);
                   i=getw(f);
                   }
     fclose(f);
     getch();
}
                   
