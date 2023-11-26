#include<stdio.h>
#include<string.h>
void main(){
     char sen[1000];
     gets(sen);
     FILE *f;
     f=fopen("rev.txt","w");
     fprintf(f,"%s",strrev(sen));
     fclose(f);
     getch();
}
