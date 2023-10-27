#include<stdio.h>
int main()
{
    int h,m,t;
    scanf("%d",&t);
    h=t/60;
    m=(t%60);
    printf("%d Hour(s) %d Minute(s)",h,m);
}