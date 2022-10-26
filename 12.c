#include<stdio.h>
int main ()
{
    double A,B,C,p,q,x,y,z;
    scanf("%lf%lf%lf",&A,&B,&C);

    p=.5*A*C;
    q=3.14159*C*C;
    x=.5*C*(A+B);
    y=B*B;
    z=A*B;
    printf("TRIANGULO: %.3lf\n",p);
    printf("CIRCULO: %.3lf\n",q);
    printf("TRAPEZIO: %.3lf\n",x);
    printf("QUADRADO: %.3lf\n",y);
    printf("RETANGULO: %.3lf\n",z);
}
