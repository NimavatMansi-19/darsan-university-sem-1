#include<stdio.h>
void main(){
     FILE *f;
     f=fopen("lrn.txt","r");
     char ch;
     ch=getc(f);
     while(ch!=EOF){
                     printf("%c",ch);
                     ch=getc(f);
     }
     fclose(f);
     getch();
}
