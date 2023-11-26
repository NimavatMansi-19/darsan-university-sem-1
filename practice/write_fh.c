#include<stdio.h>
void main(){
     char sen[1000];
     gets(sen);
     //printf("%s",sen);
     FILE *f;
     f=fopen("open.txt","w");
     fprintf(f,"%s",sen);
     fclose(f);
     getch();
}
    
   
