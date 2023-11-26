#include<stdio.h>
void main(){
     FILE *fp;
     char ch;
     fp=fopen("try.txt","r");
     ch=getc(fp);
     while(ch!=EOF){
                    printf("%c",ch);
                    ch=getc(fp);
                    
                    }
     fclose(fp);
     getch();
}
                   
     
