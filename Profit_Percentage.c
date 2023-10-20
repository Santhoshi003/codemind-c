#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int res=(y-x);
    float profit =(res*100.0)/x;
    printf("%.2f",profit);
}