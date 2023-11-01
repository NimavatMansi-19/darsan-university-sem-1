#include<stdio.h>
//Find factorial of a number using function.
int fac(int);
void main(){
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("%d",fac(a));
}
int fac(int a){
	int p=1,i;
	for(i=1;i<=a;i++){
		p=p*i;
		
	}
	return p;
}
