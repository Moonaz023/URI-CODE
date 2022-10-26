#include<stdio.h>
int main()
{
    int n,i,a[1000],t,j,k,b[1000];
    //scanf("%d",&n);
    for(i=0;i<100;i++){
       scanf("%d",&a[i]);
       b[i]=a[i];
    }
    for(j=0;j<100-1;j++)
    for(i=0;i<100-j-1;i++){
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
        }

    printf("%d\n",a[100-1]);
    for(i=0;i<100;i++)
        if(a[100-1]==b[i])
        printf("%d\n",i+1);

}

