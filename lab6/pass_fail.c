#include<stdio.h>
void main(){
	int a,b,c,d,e;
	float f;
	printf("Enter marks of maths:");
	scanf("%d",&a);
	printf("Enter marks of science:");
	scanf("%d",&b);
	printf("Enter marks of hindi:");
	scanf("%d",&c);
	printf("Enter marks of ss:");
	scanf("%d",&d);
	printf("Enter marks of computer:");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	if(f<36){
		printf("student is fail:%f",f);
		
	}else if(f>=36 && f<46){
		printf(" student is pass class:%f",f);
	}else if(f>=46 && f<61){
		printf(" student is second class:%f",f);
    }else if(f>=61 && f<71){
		printf(" student is first class:%f",f);
    }else{
    	printf("student has distinction:%f",f);
    }

	
}
