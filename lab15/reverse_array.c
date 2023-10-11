#include<stdio.h>
void main(){
	int i,a;
	printf("Enter size array:");
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++){
		printf("Enter element of array b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=a-1;i>=0;i--){
		printf("%d",b[i]);
	}
}
	
