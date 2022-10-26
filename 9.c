#include<stdio.h>
int main()
{
    char name[30];
    double c,d,x;
    scanf("%s",name);
    scanf("%lf%lf",&c,&d);
    x=c+((d*15)/100);

    printf("TOTAL = R$ %.2lf\n",x);
    return 0;


}
