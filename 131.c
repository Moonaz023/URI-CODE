#include<stdio.h>
int main()
{
    int p,wi=0,wg=0,tt=0,c,x,ii,t,I,G;
    int n,s=0,m=0,i,g;
    read:
        I=0;
        G=0;
        t=0;
    for(p=0;p<100;p++){
    scanf("%d%d",&ii,&g);
    printf("Novo grenal (1-sim 2-nao)\n");
    if(ii>g)
        I=1;
    if(ii<g)
        G=1;
    if(ii==g)
        t=1;
    wi=wi+I;
    wg=wg+G;
    tt=tt+t;
    m++;

    break;

}


    scanf("%d",&x);

   if(x==2){
        printf("%d grenais\n",m);
        printf("Inter:%d\n",wi);
   printf("Gremio:%d\n",wg);
   printf("Empates:%d\n",tt);
   if(wi>wg)
    printf("Inter venceu mais\n");
    if(wi<wg)
    printf("Gremio venceu mais\n");
    if(wi==wg)
    printf("Não houve vencedor\n");

    return 0;}
    else if(x==1)
        goto read;


}



