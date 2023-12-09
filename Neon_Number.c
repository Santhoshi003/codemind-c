#include<stdio.h>
int main()
{
    int n,s,sum=0,r,t;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(sum==t)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}



