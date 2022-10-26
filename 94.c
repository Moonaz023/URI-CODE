#include<stdio.h>
int main()
{
    int N,i,p,x=0,y=0,z=0,t;
    float j,k,l;
    char a;
    scanf("%d",&N);
    for(i=0;i<N;i++){
     scanf("%d %c",&p,&a);
        if(a == 'C'){x=p+x;}
        else if(a == 'R'){y=p+y;}
       else if(a == 'S'){z=p+z;}
       t=x+y+z;
       j=(x*100.0)/t;
       k=(y*100.0)/t;
       l=(z*100.0)/t;
    }
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",x);
    printf("Total de ratos: %d\n",y);
    printf("Total de sapos: %d\n",z);
    printf("Percentual de coelhos: %.2f %%\n",j);
    printf("Percentual de ratos: %.2f %%\n",k);
    printf("Percentual de sapos: %.2f %%\n",l);
}
