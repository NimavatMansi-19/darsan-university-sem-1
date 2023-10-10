#include<stdio.h>
void main(){
	int a,i,j,temp;
	// problem in no repetation more than 2
	printf("Enter the size of array:");
	scanf("%d",&a);
	int ar[a];
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
		
		
	}
	
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
		
		if(ar[j]==ar[i]){
			temp++;
			
			break;	
	    }
	 		
	 }
	 
    }
    
	printf("temp=%d",temp);

}
	

