#include<stdio.h>
void main(){
	int ch;
	char a;
	printf("Enter your number or character :");
	scanf("%c",&a);
	ch=((a>=97 && a<124)||(a>=65 && a<92))?printf("alphabet"):printf("not alphabet");
	
}
