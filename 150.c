#include<stdio.h>
int main()
{
    int a,n,i,j,s=0,d,z=0;
    scanf("%d%d",&a,&n);
     if(n>a)
        d=n;
    else if(n<=a){
            read:
        scanf("%d",&d);
        if(d<=a)
            goto read;
    }
    for(i=a;i<d;i++){
            z++;
        s=s+i;
    if(s>d)
        break;}
    printf("%d\n",z);
}
