#include<stdio.h>
void main(){
	int a,i,j,temp;
	
	printf("Enter the size of array:");
	scanf("%d",&a);
	int ar[a];
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
		
		
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<a-i-1;j++){
		
		if(ar[j]>ar[j+1]){
			temp=ar[j+1];
			ar[j+1]=ar[j];
			ar[j]=temp;
			
			
	    }
	 		
	 }
	 
    }
    for(i=0;i<a;i++){
    	printf("%d\n",ar[i]);
	}

}
	

