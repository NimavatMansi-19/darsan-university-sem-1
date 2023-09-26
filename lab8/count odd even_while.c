#include<stdio.h>
void main(){
	int a=1,evensum=0,oddsum=0;
	
	

	
	
	while(a!=0){
		printf("enter any val or type 0 for exit:");
		scanf("%d",&a);
		if(a%2==0){
			evensum++;	
			
		}
		else{
		    oddsum++;
				
		}
		
	}
	printf("even count=%d",evensum);
	printf("odd count=%d",oddsum);

	
}
