#include<stdio.h>
struct time{
       int h,m,s;
};

void main(){
    struct time *t,tt;
    t=&tt;
    scanf("%d %d %d",&t->h,&t->m,&t->s);
    printf("%d %d %d",t->h,t->m,t->s);
}
    
    
    
       
