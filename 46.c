#include<stdio.h>
int main ()
{
    int a,b,t;
    scanf ("%d%d",&a,&b);
    if (a>=0&&a<=24&&b>=0&&b<=24){
    if (b>a){
        t=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    if (a==b){
     printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if (a>b){
        t=(24-(a-b));
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }

}

}
