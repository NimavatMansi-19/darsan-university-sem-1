#include<stdio.h>
void main(){
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=1;i<=n;i++){
		printf("Enter value:");
		scanf("%d",&arr[i]);
		}
		printf("Correct order\n");
		for(i=1;i<=n;i++){
			
			printf("%d",arr[i]);
		}
		printf("\nReverse order\n");
		for(i=n;i>=1;i--){
			
			printf("%d",arr[i]);
		}
	
		
		
	
}
