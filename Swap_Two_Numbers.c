#include<stdio.h>
int main()
{
    int tem,a,b;
    scanf("%d%d",&a,&b);
    tem=b;
    b=a;
    a=tem;
    printf("%d
%d",a,b);
}