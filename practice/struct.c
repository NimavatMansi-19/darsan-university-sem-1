#include<stdio.h>
struct stu{
 int summ,mark[3];   
};
struct stu marks();
int main(){
    struct stu s;
    int i;
    for(i=0;i<3;i++){
        scanf("%d",&s.mark[i]);
    }
   
   
  // struct stu s1;
    marks();
    //printf("%d",s1.mark);
    return 0;
    getch();
}
struct stu marks(){
    struct stu t;
    int i;
    for(i=0;i<3;i++){
        printf("%d",&t.mark[i]);
    }
    return ;
}

    
