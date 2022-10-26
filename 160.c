#include<stdio.h>
int main()
{
    int a,b,y,n,i;
    double ga,gb;
    scanf("%d",&n);
          for(i=1;i<=n;i++){
                y=0;
            scanf("%d%d%lf%lf",&a,&b,&ga,&gb);
            while(a<=b){
                a=a+((a*ga)/100);
                b=b+((b*gb)/100);
                y++;
          if(y>100){
            printf("Mais de 1 seculo.\n");
            break;
          }
            }
            if(y<=100)
                printf("%d anos.\n",y);
          }
}
