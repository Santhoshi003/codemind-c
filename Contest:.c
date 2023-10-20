#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int res=(b+2*c);
    if(res>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}