#include<stdio.h>
void main(){
	int i,j,a,n=0,flag=0;
	printf("Enter size array:");
	scanf("%d",&a);
	int ar[a],ar1[a];
	for(i=0;i<a;i++){
		printf("Enter element of array b[%d]:",i);
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<a;i++){
		flag=0;
	    for(j=0;j<n;j++){
			if(ar[i]==ar1[j]){
				break;
				
			}
			
		}
		if(j==n){
				ar1[n] = ar[i];
				n++;
			}
	
	}
	for(j=0;j<n;j++){
		printf("%d",ar1[j]);
	}
	
		
}
