#include<stdio.h>
void main(){
	int i,a,n,d;
	printf("Enter size array:");
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++){
		printf("Enter element of array b[%d]:",i);
		scanf("%d",&b[i]);
		
		}
	printf("Enter the no you want to search:");
	scanf("%d",&n);
	for(i=0;i<a;i++){
		if(i==n-1){
			printf("%d",b[i]);
		}
	}
	
	
		
	

	
}
