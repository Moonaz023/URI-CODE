#include<stdio.h>
int main ()
{
    int i,a[47],n;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<47;i++)
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1)
            printf(" ");

    }
    printf("\n");

}


