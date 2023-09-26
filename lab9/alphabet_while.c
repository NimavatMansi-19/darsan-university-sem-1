#include<stdio.h>
void main(){
	int i=65,j=97;
	
	
	while(i>=65 && i<=90|| j>=97 && j<=122){
		printf("%c %c\n",i,j);
		i++;
		j++;
	}
}
