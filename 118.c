#include<stdio.h>
int main()
{
    int p,cc=0,c,x,i;
    float n,s=0,m=0;
    read:
        cc=0;
        c=0;
        s=0;
    for(p=0;p<100;p++){
    scanf("%f",&n);
    if(n>=0 && n<=10){
            s=s+n;
        c=1;

    }
    else{
            printf("nota invalida\n");
   c=0;}
    cc=cc+c;
           if(cc==2)
printf("media = %.2f\n",s/2.0);
   if(cc>=2)
    break;

}

        for(i=0;i<100;i++){
    scanf("%d",&x);
    printf("novo calculo (1-sim 2-nao)\n");
   if(x==2)
    break;
    else if(x==1)
        goto read;
}

return 0;

}

