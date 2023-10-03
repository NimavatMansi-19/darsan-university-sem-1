#include<stdio.h>
void main(){
	int i,j,n=5,a=1,count=0;
	for(i=1;i<=n;i++){
		
	
			
		
		for(j=1;j<=i;j++){
			
			
			count=count+1;
			if(count%2!=0){
				printf("%d",a);
				a=0;
			}else{
				printf("%d",a);
				a=1;
			}

		}
		
		printf("\n");
	}
}
