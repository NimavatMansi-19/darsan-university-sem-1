#include<stdio.h>
void main(){
	int i,a;
	printf("Enter size that is equal in  both array:");
	scanf("%d",&a);
	int b[a],c[a];
	for(i=0;i<a;i++){
		printf("Enter element of array b[]:");
		scanf("%d",&b[i]);
		c[i]=b[i];
		
	}
	for(i=0;i<a;i++){
		printf("%d",c[i]);
	}
}
