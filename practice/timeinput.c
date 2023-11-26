#include<stdio.h>
struct time{
       int h,m,s;
};
struct time input();
int main(){
    struct time t;
    t=input();
    printf("%d %d %d",t.h,t.m,t.s);
    return 0;
    getch();
    
}
struct time input(){
       struct time tt;
       scanf("%d %d %d",&tt.h,&tt.m,&tt.s);
       return tt;
}
       
