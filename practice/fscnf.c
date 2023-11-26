#include<stdio.h>
void main(){
     char s[10];
     FILE *f;
     f=fopen("fscnf.txt","r");
     while(fscanf(f,"%c",&s)==1)
    {
                    printf("%s",s);
                    }
                    fclose(f);
                    getch();
}
     
    
     
     
