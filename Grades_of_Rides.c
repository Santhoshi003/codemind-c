#include<stdio.h>
int main()
{
    int hf,sf,ssf;
    scanf("%d%d%d",&hf,&sf,&ssf);
    if (hf>50 && sf>60 && ssf>100)
    {
        printf("10");
    }
    else if(hf>50 && sf>60)
    {
        printf("9");
    }
    else if (sf>60 && ssf>100)
    {
        printf("8");
    }
    else if (hf>50 && ssf>100)
    {
        printf("7");
    }
    else if (hf>50 || sf>60 || ssf>100)
    {
        printf("6");
    }
    else 
     {
         printf("5");
     }
}
















