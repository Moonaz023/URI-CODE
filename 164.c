#include<stdio.h>
int main ()
{
    int a,i,s=0,n,p;
    scanf("%d",&a);
    for(p=0;p<a;p++){
            s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n)
        printf("%d eh perfeito\n",n);
        else
        printf("%d nao eh perfeito\n",n);
}
}
