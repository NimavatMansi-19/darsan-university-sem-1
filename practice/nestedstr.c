#include<stdio.h>
struct time{
       int h,m,s;
};
struct day{
       char days[10];
       struct time t;
};

void main(){
    struct day d;

    scanf("%s %d %d %d",d.days,&d.t.h,&d.t.m,&d.t.s);
    printf("%s %d %d %d",d.days,d.t.h,d.t.m,d.t.s);
    getch();
}
    
    
    
       
