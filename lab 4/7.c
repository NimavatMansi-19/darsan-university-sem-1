#include<stdio.h>
void main(){
	//swap two no
	int a,b;
	printf("enter height:");
	scanf("%d",&a);
	printf("enter base:");
	scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    //not using temprory variable
}
