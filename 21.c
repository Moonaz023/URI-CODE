
#include<stdio.h>
int main ()
{
    double x;
    int y;
    scanf("%lf",&x);

    printf("NOTAS:\n");
    y=x/100.00;
    printf("%d nota(s) de R$ 100.00\n",y);
    x=x-(y)*100;

    y=x/50;
    printf("%d nota(s) de R$ 50.00\n",y);
    x=x-(y)*50;

    y=x/20.00;
    printf("%d nota(s) de R$ 20.00\n",y);
    x=x-(y)*20;

    y=x/10.00;
    printf("%d nota(s) de R$ 10.00\n",y);
    x=x-(y)*10;

    y=x/5.00;
    printf("%d nota(s) de R$ 5.00\n",y);
    x=x-(y)*5;

    y=x/2.00;
    printf("%d nota(s) de R$ 2.00\n",y);
    x=x-(y)*2;

    printf("MOEDAS:\n");
    y=x/1.00;
    printf("%d moeda(s) de R$ 1.00\n",y);
    x=x-(y)*1.00;

    y=x/0.50;
    printf("%d moeda(s) de R$ 0.50\n",y);
    x=x-(y)*.50;

    y=x/0.25;
    printf("%d moeda(s) de R$ 0.25\n",y);
    x=x-(y)*.25;

    y=x/0.10;
    printf("%d moeda(s) de R$ 0.10\n",y);
    x=x-(y)*.10;

    y=x/0.05;
    printf("%d moeda(s) de R$ 0.05\n",y);
    x=x-(y)*.05;

    y=round(x/0.01);
    printf("%d moeda(s) de R$ 0.01\n",y);
    x=x-(y)*0.01;
    printf("%.2f",x);

}

