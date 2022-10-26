#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,x,p,q;
    scanf("%f%f%f",&A,&B,&C);
    x=((B*B)-(4*A*C));

    p=(-B+sqrt(x))/(A+A);
    q=(-B-sqrt(x))/(A+A);
    if(x<0||A==0)
        printf("Impossivel calcular\n");

    else
    {
        printf("R1 = %.5f\n",p);
        printf("R2 = %.5f\n",q);
    }
}
