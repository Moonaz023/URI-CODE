#include<stdio.h>
int main()
{
    int a[20],i,n,j,m[20],k=19;
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);

        m[k]=a[i];
        k--;
        }
        for(k=0;k<20;k++){

            printf("N[%d] = %d\n",k,m[k]);
           }



}
