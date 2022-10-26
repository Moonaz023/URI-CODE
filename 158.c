#include<stdio.h>
int main()
{
    int n,i,s=0,x,y,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            s=0;
        scanf("%d%d",&x,&y);
        for(a=x;a<y*2+x;a++)
        {
            if(a%2!=0)
                s=s+a;
        }
        printf("%d\n",s);
    }
}
