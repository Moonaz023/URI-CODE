#include<stdio.h>
int main()
{
    int i,n;
    float s=0;
    for(i=1;i<=100;i++)
        s=s+(1.0/i);
    printf("%.2f\n",s);
}
