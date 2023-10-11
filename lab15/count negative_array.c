#include<stdio.h>
void main(){
	int i,a,count=0;
	printf("Enter size array:");
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++){
		printf("Enter element of array b[%d]:",i);
		scanf("%d",&b[i]);
		if(b[i]<=0){
			count++;
		}
		
		
	}
	printf(" negative no=%d",count);
	
}
