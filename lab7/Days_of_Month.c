#include<stdio.h>
void main(){
	int a;
	printf("enter number 1 to 12:");
	scanf("%d",&a);
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("Month has 31 days");
		        break;
		case 2:printf("Month has 29 days");
		       break;
		case 4:
		case 6:
		case 9:
		case 11:printf("Month has 30 days");
		        break;
		default:printf("Invalid input");
		         break;
	}
}
