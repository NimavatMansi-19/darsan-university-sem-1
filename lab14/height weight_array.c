#include<stdio.h>
void main(){
	int h,w,arrh[5],arrw[5],i,count=0;
	for(i=0;i<5;i++){
		printf("Enter height and weight:");
		scanf("%d %d",&arrh[i],&arrw[i]);
		if(arrh[i]>170 && arrw[i]<50){
			count++;
		}
		
		
	}
	printf(" person having height greater than 170 and weight less than 50 is:%d",count);
	
}
