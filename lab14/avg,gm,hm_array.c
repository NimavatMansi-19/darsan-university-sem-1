#include<stdio.h>
#include<math.h>
void main(){
	int a,i,sum=0,m=1;
	float avg=0,h=0,g,h1;
	printf("Enter the size of array:");
	scanf("%d",&a);
	int ar[a];
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
		sum=sum+ar[i];
		m=m*ar[i];
		h=h+(1.0/ar[i]);
		
	}
	avg=sum/a;
	g=pow(m,(1.0/a));
	h1=a/h;
	printf("avg=%f\ngeometric mean=%f\nharmonic mean=%f ",avg,g,h1);
}
