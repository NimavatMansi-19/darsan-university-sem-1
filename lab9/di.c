#include<stdio.h>
void main(){
	int n,a,b,sum=0;
	printf("Enter your number:");
	scanf("%d",&n);
	while(n>0){
		b=n%10;
		sum=sum*10+b;
		n=n/10;
	}
	while(sum>0){
		a=sum%10;
		switch(a){
			case 0:printf("Zero");
			      break;
			      
			case 1:printf("One");
			      break;
			    
			case 2:printf("Two");
			      break;
			case 3:printf("Three");
			      break;
			case 4:printf("Four");
			      break;
			case 5:printf("Five");
			      break;
			case 6:printf("Six");
			      break;
			case 7:printf("Seven");
			      break;
			case 8:printf("Eight");
			      break;
			case 9:printf("Nine");
			      break;
		}
		sum=sum/10;
		
	}
}
