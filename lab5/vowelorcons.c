#include<stdio.h>
void main(){
	// check vowels or consonants
	char a;
	printf("enter char:");
	scanf("%c",&a);
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("char is vowel:");
	}else{
		printf("char is consonants:");
	}
}
