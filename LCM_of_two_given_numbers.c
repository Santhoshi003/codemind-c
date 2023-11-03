#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        int res=b*i;
        if(res%a==0)
        {
            printf("%d",res);
            break;
        }
    }
}