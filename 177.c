#include<stdio.h>
int main()
{
    int i,j=0,n,a[1000];
    scanf("%d",&n);
    for(i=0;i<1000;i++){
        j++;
        if(i%n==0)
            j=0;
            a[i]=j;
        printf("N[%d] = %d\n",i,a[j]);
    }
}
