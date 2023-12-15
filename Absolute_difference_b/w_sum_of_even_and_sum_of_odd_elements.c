#include<stdio.h>
#include<math.h>
int main()
{
    int n,diff;
    scanf("%d",&n);
    int arr[n],esum=0,osum=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            esum=esum+arr[i];
            
        }
       else
       {
           osum=osum+arr[i];
       }
    }
    diff=abs(esum-osum);
    printf("%d",diff);
}






