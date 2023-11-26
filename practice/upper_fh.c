#include<stdio.h>
#include<string.h>
void main(){
     char sen[1000];
     gets(sen);
     FILE *f;
     f=fopen("upper.txt","w");
     fprintf(f,"%s",strupr(sen));
     fclose(f);
     getch();
}
