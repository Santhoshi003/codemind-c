#include<stdio.h>
int main()
{
    int a,b,f=0,t,r,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=1;
        t=i;
        r=t%10;
        while(t!=0)
        {
            r=t%10;
            if(r==0 || i%r!=0)
            {
                f=0;
            }
            t=t/10;
        }
        if(f==1)
        {
            printf("%d ",i);
        }
    }
}