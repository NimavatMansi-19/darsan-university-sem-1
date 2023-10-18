#include<stdio.h>
void main(){
	//Print Transpose of a matrix.
	int i,j,m,n,k;
	printf("Enter column and rows:");
	scanf("%d %d",&m,&n);
	int ar1[m][n],ar2[m][n],multi[m][n];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter elements ar[%d][%d]:",i,j);
			scanf("%d",&ar1[i][j]);
			
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter elements ar[%d][%d]:",i,j);
			scanf("%d",&ar2[i][j]);
			
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			multi[i][j]=0;
			for(k=0;k<n;k++){
				multi[i][j]=multi[i][j]+(ar1[i][k]*ar2[k][j]);
				
			}
			
			
		}
		
		
		
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
    }

	
}
