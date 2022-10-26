#include<stdio.h>
int main()
{
    double a,b,c,d,z,t,e;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    t=((a*2)+(b*3)+(c*4)+(d*1))/10;
    if (t>=7.0)
    {
        printf("Media: %.1lf\n",t);
        printf("Aluno aprovado.\n");
    }
    else if(t>=5.0&&t<=6.9)
    {
        printf("Media: %.1lf\n",t);
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        z=(t+e)/2;
        if(z>=5)
        printf("Aluno aprovado.\n");
        else
        {printf("Aluno reprovado.\n");}
        printf("Media final: %.1lf\n",z);
    }
    else
    {
        printf("Media: %.1lf\n",t);
        printf("Aluno reprovado.\n");
    }
}
