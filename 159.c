#include<stdio.h>
int main()
{
    int n,i,s=0,x,y,a;

    for(i=0;i<100;i++){
            s=0;
        scanf("%d",&x);
    if(x==0)
        break;
        for(a=x;a<x+10;a++)
        {
            if(a%2==0)
                s=s+a;
        }
        printf("%d\n",s);
    }
}
