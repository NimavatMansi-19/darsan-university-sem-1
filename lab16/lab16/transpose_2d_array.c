#include<stdio.h>
void main(){
	//Print Transpose of a matrix.
	int i,j,m,n;
	printf("Enter column and rows:");
	scanf("%d %d",&n,&m);
	int ar[m][n];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter elements ar[%d][%d]:",i,j);
			scanf("%d",&ar[i][j]);
			
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			
			printf("%d ",ar[j][i]);
		}
		printf("\n");
	}
}
