#include<stdio.h>
int main ()
{
    int n,m,t,i,c=0,p;
   for(p=0;p=1000;p++){
    scanf("%d%d",&n,&m);
    if(m==0||n==0)
        break;
       if(0<n && m>0)
        printf("primeiro\n");
        if(0>n && m>0)
        printf("segundo\n");
        if(0>n && m<0)
        printf("terceiro\n");
        if(0<n && m<0)
        printf("quarto\n");


}
}
