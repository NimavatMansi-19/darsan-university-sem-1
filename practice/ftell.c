#include<stdio.h>
void main(){
     char s[20];
     FILE *f;
     f=fopen("fscnf.txt","r");
     fscanf(f,"%s",&s);
     printf("%ld",ftell(f));
                    fclose(f);
                    getch();
}
     
    
     
     
