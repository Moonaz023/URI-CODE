#include<stdio.h>
int main()
{
    int i,j=0;
    double n,a[100];
    scanf("%lf",&n);
    for(i=0;i<100;i++){

            a[i]=n;
            n=n/2;
        printf("N[%d] = %.4lf\n",i,a[i]);
    }
}

