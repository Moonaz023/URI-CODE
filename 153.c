#include<stdio.h>
int main ()
{
    int i,n,N=1;
    scanf("%d",&n);
    for(i=n-1;i>=1;i--){
       N=N*(n-i); }
    printf("%d\n",N*n);
}
