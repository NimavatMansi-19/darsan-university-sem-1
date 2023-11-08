#include<stdio.h>
//Return the maximum of three floating-point numbers.
float max(float,float,float);
void main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	 float res=max(a,b,c);
	 printf("%f",res);
}
float max(float a,float b,float c){
	if(a>b){
		if(a>c){
			//printf("max=%f",a);
			return a;
		}else{
		//	printf("max=%f",c);
			return c;
		}
    }
	else{
		if(b>c){
			//printf("max=%f",b);
			return b;
		}else{
		//	printf("max=%f",c);
			return c;
		}
    }
	
	
}

