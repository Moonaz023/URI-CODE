#include<stdio.h>
int main()
{
    int i,a,p[5],x=0,r,y=0,c[5],q;
    for(i=1;i<=15;i++){
    scanf("%d",&a);
    if(a%2==0){
        p[x]=a;
        if(x==4){
                for(r=0;r<5;r++)
            printf("par[%d] = %d\n",r,p[r]);
            x=-1;}
        x++;}
        else{
            c[y]=a;
        if(y==4){
                for(q=0;q<5;q++)
            printf("impar[%d] = %d\n",q,c[q]);
            y=-1;}
            y++;
        }

    }

            for(q=0;q<y;q++)
            printf("impar[%d] = %d\n",q,c[q]);
            for(r=0;r<x;r++)
            printf("par[%d] = %d\n",r,p[r]);


}

