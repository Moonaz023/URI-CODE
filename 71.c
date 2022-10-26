#include<stdio.h>
int main ()
{
    int i,n,m,a,b,p=0,j;
    scanf("%d%d",&m,&n);
    if(m==n){
        printf("0\n");
    }
    else{
    if(m>n){
        a=n;
        b=m;
    }
    else{
        a=m;
        b=n;
    }


    for(i=a+1;i<b;i++)
    {
        if(i%2!=0){



           p=p+i;
    }}

    printf("%d\n",p);

}}

