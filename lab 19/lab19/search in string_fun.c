#include<stdio.h>
//Find a character from given string
void main(){
	char c[10]="Sunday";
	char x;
	int i;
	printf("Enter the char you want to search:");
	scanf("%c",&x);
	for(i=0;c[i]!='\0';i++){
		if(c[i]==x){
			printf("%d",i);
		}
	}
}
