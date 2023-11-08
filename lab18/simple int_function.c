#include<stdio.h>
//Count simple interest using function.
void SI(int p,int r,int n);
void main(){
	int p,r,n;
	float si;
	printf("Enter value of p,r,n:");
	scanf("%d %d %d",&p,&r,&n);
	SI(p,r,n);
}
void SI(int p,int r,int n){
	float si;
	si=(p*r*n)/100.0;
	printf("%f",si);
}
