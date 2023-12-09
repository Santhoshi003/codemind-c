#include<stdio.h>
int main()
{
    int n,m,i,sum=0,s=0,j,a,b;
    scanf("%d %d",&n,&m);
    a=n,b=m;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
          sum=sum+i;  
        }
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
          s=s+j;  
        }
    }
    if (sum==b && s==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}





