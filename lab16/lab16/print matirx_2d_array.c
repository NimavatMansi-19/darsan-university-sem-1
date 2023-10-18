#include<stdio.h>
void main(){
	//Read values in two-dimensional array and print them in matrix form
	int i,j,m,n;
	printf("Enter rows and column:");
	scanf("%d %d",&n,&m);
	int ar[n][m];
	
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
}
