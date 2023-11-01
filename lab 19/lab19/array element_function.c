#include<stdio.h>
//Pass an array in function to print array elements
void print(int a[]);
void main(){
	int i,n=5;
	int ar[n];
	for(i=0;i<5;i++){
		printf("Enter array element");
		scanf("%d",&ar[i]);
	}
	print(ar);

	
}

void print(int ar[]){
	int i;
	for(i=0;i<5;i++){
		printf("%d\n",ar[i]);
	}
}
