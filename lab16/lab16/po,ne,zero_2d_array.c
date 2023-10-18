#include<stdio.h>
void main(){
	// Count number of positive, negative and zero elements from 3 X 3 matrix.
	int i,j,m,n,po_c=0,ne_c=0,zero_c=0;
//	printf("Enter rows and column:");
	//scanf("%d %d",&n,&m);
	int ar[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter elements ar[%d][%d]:",i,j);
			scanf("%d",&ar[i][j]);
			
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(ar[i][j]>0){
				po_c++;
			}
			else if(ar[i][j]==0){
				zero_c++;
			}
			else{
				ne_c++;
			}
			
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	printf("Positive no=%d\nNegative no=%d\nzero=%d",po_c,ne_c,zero_c);
}
