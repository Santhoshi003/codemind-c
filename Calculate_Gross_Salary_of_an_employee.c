#include<stdio.h>
int main()
{
    float bs,hr,da;
    scanf("%f%f%f",&bs,&hr,&da);
    float pf = (12*bs)/100.0;
    printf("%.2f
",pf);
    float gs=(bs+hr+da+pf);
    printf("%.2f",gs);
}