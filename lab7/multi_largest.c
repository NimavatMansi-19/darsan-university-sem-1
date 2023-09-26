#include<stdio.h>
void main(){
	int a,b,c,max,d;
	 
	printf("Enter number1:");
	scanf("%d",&a);
    printf("Enter number2:");
	scanf("%d",&b);
	printf("Enter number 3:");
	scanf("%d",&c);
	max=(a>b)?a:b;
	
	
	if(a>b){
		switch(max){
		case 1:d=a*c;
		         printf("%d",d);
		         break;
		    }
	}else{
	
	switch(max){
		
		case default:d=b*c;
		         printf("%d",d);
		         break;
    }
	}
}
