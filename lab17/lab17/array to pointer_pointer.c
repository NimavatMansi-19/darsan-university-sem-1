#include<stdio.h>
void main(){
//Store n elements in an array and print the elements using pointer
   int a1[50],i,n;
   printf("Enter size of an array:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
   	printf("enter element");
   	scanf("%d",a1+i);
   	
   }
   for(i=0;i<n;i++){
   	printf("%d",*(a1+i));
   }
}
   
