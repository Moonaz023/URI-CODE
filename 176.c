#include<stdio.h>
int main ()
{
    int i,n,c,k;
      long long int a[61];
    a[0]=0;
    a[1]=1;
    for(i=2;i<61;i++)
        a[i]=a[i-1]+a[i-2];
   scanf("%d",&n);
   for(k=1;k<=n;k++){
    scanf("%d",&c);
    printf("Fib(%d) = %lld\n",c,a[c]);
   }
}
