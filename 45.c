#include<stdio.h>
int main ()
{
   double A,B,C,T;
   scanf ("%lf%lf%lf",&A,&B,&C);
   if (A<B){T=B;B=A;A=T;}
   if (A<C){T=A;A=C;C=T;}
   if (B<C){T=C;C=B;B=T;}

    if (A >= B + C)

    printf ("NAO FORMA TRIANGULO\n");
    else{
    if (A*A == B*B + C*C)
    printf ("TRIANGULO RETANGULO\n");
    if (A*A > B*B + C*C)
    printf ("TRIANGULO OBTUSANGULO\n");
    if (A*A < B*B + C*C)
    printf ("TRIANGULO ACUTANGULO\n");
    if (A ==B&&B==C)
    printf ("TRIANGULO EQUILATERO\n");
    else if ((A == B)||(A==C)||(B==C))

    printf ("TRIANGULO ISOSCELES\n");
    }

}

