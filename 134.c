#include<stdio.h>
int main()
{
unsigned int a,i,aa=0,g=0,d=0,sa=0,sg=0,sd=0;
for(i=0;i=100;i++){
        aa=0;
g=0;
d=0;
aa=0;
    scanf("%d",&a);
    if(a==1)
      aa=1;
       if(a==2)
      g=1;
       if(a==3)
      d=1;
      sa=sa+aa;
      sg=sg+g;
      sd=sd+d;

    if(a==4)
        break;


}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",sa);
printf("Gasolina: %d\n",sg);
printf("Diesel: %d\n",sd);
}
