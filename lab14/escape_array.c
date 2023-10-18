#include<stdio.h>
void main(){
	int i,n,max,x,size = 0;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter value:");
		scanf("%d",&arr[i]);
		}
		max=arr[0];
		for(i=1;i<n;i++){
		
			if(arr[i]>max){
				max=arr[i];
			} 
	    }
	 //   printf("%d",max);
	    size = max + 1;
	    
	    
    int b[size];
    for(i=0;i<size;i++){
    	b[i]=0;
	}
	    for(i=0;i<n;i++){
	    	x=arr[i];	  
			b[x]=1;
	    }
	    for(i=0;i<max+1;i++){
	    	if(b[i]==0){
	    		printf("\n%d",i);
			}
	    	
		}
	    
}
