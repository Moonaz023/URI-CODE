#include<stdio.h>
int main ()
{
    int n,m,t,i,c=0,p;
   for(p=0;p=1000;p++){
    scanf("%d%d",&n,&m);
    if(m<=0||n<=0)
        break;
       if(m<n)
        {
            t=m;
            m=n;
            n=t;
        }

        for(i=n;i<=m;i++){
            printf("%d ",i);
            c=c+i;
        }
        printf("Sum=%d\n",c);
        c=0;

}
}
