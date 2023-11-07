#include<stdio.h>
//Create structure student with name, percentage and age. Read data of 5 students using array of structure.
struct student{
	char name[30];
	int age;
	float perc;
	
};
void main(){
	struct student s[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter student's name:");
		scanf("%s",s[i].name);
		printf("Enter student's age:");
		scanf("%d",&s[i].age);
		printf("Enter student's perc:");
		scanf("%f",&s[i].perc);
		
	}
	for(i=0;i<5;i++){
		printf("%sstudent's name:\n",s[i].name);
		printf("%dstudent's age:",s[i].age);
		printf("%f student's perc",s[i].perc);
	  
		
		
	}
}
