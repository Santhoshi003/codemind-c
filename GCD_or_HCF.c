#include<stdio.h>
int main()
{
    int a,b,c,i,gcd;
    scanf("%d%d",&a,&b);
    for(i=1;;i++)
    {
        c=a*i;
        if(c%b==0)
        {
            break;
        }
    }
    gcd=(a*b)/c;
    printf("%d",gcd);
}