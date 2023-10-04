#include<stdio.h>
void main(){
	int i,n,ne_c=0,po_c=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=1;i<=n;i++){
		printf("Enter value:");
		scanf("%d",&arr[i]);
		}
		for(i=1;i<=n;i++){
			if(arr[i]<0){
				ne_c=ne_c+1;
			}else{
				po_c=po_c+1;
			}
		}
		printf(" negative no:%d\n positive no:%d",ne_c,po_c);
}
