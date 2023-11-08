#include<stdio.h>
//Count chars, spaces, tabs and new lines in a file.
void main(){
	FILE *p;
	char ch;int countc=0,countnl=0,counts=0,countt=0,countsp=0;
	p=fopen("try.txt","r");
	
	ch=getc(p);

	while(ch!=EOF){
		
		if(ch>'a' && ch<'z' || ch>'A' && ch<'Z'){
			countc++;
		}
		else if(ch=='\n'){
			countnl++;
		}
		else if(ch=='\t'){
			countt++;
		}
		else if(ch==' '){
			counts++;
		}
		else{
			countsp++;
		}
		
	   
	   
	   ch=getc(p);
	   

    }
    
   
    fclose(p);
	 printf("%d %d %d %d  %d",countc,countnl,countt,counts,countsp);
	
}
