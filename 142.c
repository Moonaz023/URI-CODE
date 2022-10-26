#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a*4;i++)
        if(i%4!=0)
        printf("%d ",i);
    else
        printf("PUM\n");




}
