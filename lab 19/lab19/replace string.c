#include<stdio.h>
//Replace a character in given string
void main(){
	char s[10]="Wednesday",m,n;
	int i;
	printf("Enter the char you want to replace and by what:");
	scanf("%c %c",&m,&n);
	for(i=0;s[i]!='\0';i++){
		if(s[i]==m){
			s[i]=n;
		}
	}
	for(i=0;s[i]!='\0';i++){
		printf("%c",s[i]);
	
}
}
