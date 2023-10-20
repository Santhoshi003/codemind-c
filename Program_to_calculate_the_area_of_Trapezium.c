#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float area=(0.5)*c*(b+a);
    printf("%.4f",area);
}