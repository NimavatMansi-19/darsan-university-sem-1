#include<stdio.h>
void main(){
     char s[100];
     gets(s);
     FILE *f;
     f=fopen("wrt.txt","w");
     fprintf(f,"%s",s);
     fclose(f);
     getch();
}
