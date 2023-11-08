#include<stdio.h>
//Create, open and close a file.
void main(){
	FILE *p;
	char ch;
	p=fopen("try.txt","r");
	
	ch=getc(p);
	while(ch!=EOF){
		
	   
	   printf("%c",ch);
	   ch=getc(p);

    }
    fclose(p);
	
	
}
