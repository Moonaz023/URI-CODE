#include<stdio.h>
int main ()
{
    double pi,R,x;
    scanf("%lf",&R);
    pi=3.14159;
    x=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",x);
}
