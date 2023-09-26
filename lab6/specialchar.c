#include<stdio.h>
void main(){
	// check lower upper digit or special char
	char a;
	printf("Enter your number or character :");
	scanf("%c",&a);
	if(a>=97 && a<124){
		printf("%c lower case");
	
	}else if(a>=65 && a<92){
		printf("%c upper case");
	
	}else if(a>=48 && a<58){
		printf("%c digit");
	
	}else{
		printf("%c special character");
    }
}
