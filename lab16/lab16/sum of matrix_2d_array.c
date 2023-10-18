#include<stdio.h>
void main(){
	//Perform Addition of two matrices.
	int i,j,m,n,sum=0;
	printf("Enter rows and column:");
	scanf("%d %d",&n,&m);
	int ar[n][m],ar1[n][m];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter elements ar[%d][%d]:",i,j);
			scanf("%d",&ar[i][j]);
			
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	//second array
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter elements ar[%d][%d]:",i,j);
			scanf("%d",&ar1[i][j]);
			
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			printf("%d ",ar1[i][j]);
		}
		printf("\n");
	}
	//sum
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=ar[i][j]+ar1[i][j];
			printf("%d ",sum);
			
		}
		printf("\n");
	}
}
