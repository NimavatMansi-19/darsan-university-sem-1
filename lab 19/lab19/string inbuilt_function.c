#include<stdio.h>
#include<string.h>
//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()
void main(){
	 char s[10]="Mansi",s1[10]="Darshi";
	 printf("s=%d\ns1=%d",strlen(s),strlen(s1));
	 printf("\n%d",strcmp(s,s1));
	// printf("\n%s",strcpy(s,s1));
	// printf("\n%s",strcat(s,s1));
	// printf("\n%s",strrev(s));
	//printf("\n%s",strlwr(s));
	//printf("\n%s",strupr(s));
    printf("\n%s",strrchr(s,'s'));	
	
}
