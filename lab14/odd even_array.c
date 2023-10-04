#include<stdio.h>
void main(){
	int i,n,even=0,odd=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=1;i<=n;i++){
		printf("Enter value:");
		scanf("%d",&arr[i]);
		
		//for(i=1;i<=n;i++){
			if(arr[i]%2==0){
				even++;
			}else{
				odd++;
			}
		}
		printf(" even no:%d\n odd no:%d",even,odd);
}
