#include<stdio.h>
int main()
{
    int n,i,j;
    float a[4],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      for(j=0;j<3;j++){
         scanf("%f",&a[j]);
         a[0]=a[0]*2;
         a[1]=a[1]*3;
         a[2]=a[2]*5;
         sum=sum+a[j];
    }
    printf("%.1f\n",sum/10.0);
    sum=0;
}}

