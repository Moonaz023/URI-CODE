#include<stdio.h>
int main()
{
    int i,a[10],j;
    scanf("%d",&j);
    for(i=0;i<10;i++){

        a[i]=j;
        j=j*2;
        printf("N[%d] = %d\n",i,a[i]);
    }
}

