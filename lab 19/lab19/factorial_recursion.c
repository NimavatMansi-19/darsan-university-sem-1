#include<stdio.h>
//Find factorial of a number using and recursive function.
int fac(int a);
void main(){
	int m;
	scanf("%d",&m);
	//return m;
	printf("%d",fac(m));
}
int fac(int m){
	if(m==1){
		return 1;
		
	}else{
		return m*(m-1);
	}
}
