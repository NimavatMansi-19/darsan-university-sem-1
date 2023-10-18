#include<stdio.h>
void main(){
	// Read and store the roll no and marks of 20 students using 2D array.
	int i;
	
	int rollnumber[20];
	int marks[20];
	for(i=0;i<20;i++){
		
			printf("Enter roll number:");
			scanf("%d",&rollnumber[i]);
			
		}
	
	for(i=0;i<20;i++){
		
			printf("Enter marks:");
			scanf("%d",&marks[i]);
			
		}
	for(i=0;i<20;i++){
		printf("roll no:%d-marks:%d",rollnumber[i],marks[i]);
		printf("\n");
		}
		
	
}
