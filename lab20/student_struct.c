#include<stdio.h>
//Create structure student with name, percentage and age. Read data of 5 students using array of structure.
void per(int m[]);
struct student{
	char name[30];
	int age;
	float perc;
	void per(a);
};

//struct student s={'kk',{12,34,56},78};
void main(){
	int m[5],i;
	for(i=0;i<5;i++){
		printf("Enter student%d's total marks:",i+1);
		scanf("%d",&m[i]);	
	}
	
	
	struct student s[5];
	//int i;
	for(i=0;i<5;i++){
		printf("Enter student's name:");
		scanf("%s",s[i].name);
		printf("Enter student's age:");
		scanf("%d",&s[i].age);
		
	}
	
	float per1;
	for(i=0;i<5;i++){
		printf("student's name:%s\n",s[i].name);
		printf("student's age:%d\n",s[i].age);
		per1=m[i]/5;	
		printf("percentage=%f\n",per1);	
	}
	
}
void per(int m[5]){
	int i;
	for(i=0;i<5;i++){
		float per1;
		per1=m[i]/5;
		return per1;
		//printf("percentage=%f\n",per1);
	}
//	
//	
//	
//}
