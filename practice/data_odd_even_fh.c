#include<stdio.h>
void main(){
     FILE *f,*o,*e;
     f=fopen("data.txt","r");
     o=fopen("odd.txt","w");
     e=fopen("even.txt","w");
     int c;
     c=getc(f);
     while(c!=EOF){
                   if(c%2==0){
                              putw(c,e);
                            c=getc(f);
                              }
                   else{
                              putw(c,o);
                            c=getc(f);
                              }
     }
     
     fclose(f);
     fclose(o);
     fclose(e);
     getch();
}
