#include<stdio.h>
void main(){
	int i,n,max,min,sum=0,avg=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter value:");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		
		
	}
	    avg=sum/n;
		max=arr[0];
	    min=arr[0];
		
		for(i=1;i<n;i++){
		
			if(arr[i]>max){
				max=arr[i];
			} 
			if(arr[i]<min){
				min=arr[i];
			}
			
		}
		printf("max:%d \n min:%d \n sum:%d \n avg:%d",max,min,sum,avg);
}
