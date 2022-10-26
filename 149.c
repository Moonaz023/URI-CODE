#include<stdio.h>
int main()
{
    int a,n,i,j,s=0,d;
    scanf("%d%d",&a,&n);
    if(n>0)
        d=n;
    else if(n<=0){
            read:
        scanf("%d",&d);
        if(d<=0)
            goto read;
    }
    for(i=0;i<d;i++){
        s=s+i+a;
    }
    printf("%d\n",s);



}
