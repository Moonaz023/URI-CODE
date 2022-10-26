#include<stdio.h>
int main ()
{
    int i,p,q=0,n,x=0,y=0,z=0,a,r,s;
    float nn,N=0;
    for(i=1;i<=5;i++){
  for(i=1;i<=5;i++){
    scanf("%d",&n);
    if(n%2==0){

        p=1;
        a=0;}
    else{
        a=1;
        p=0;}
        if(n<0){
            r=0;
            s=1;
        }
        else if(n>0){
            r=1;
            s=0;
        }
        else if(n==0){
            r=0;
            s=0;
        }

   q=q+p;
   x=x+a;
   y=r+y;
   z=s+z;


   }
    printf("%d valor(es) par(es)\n",q);
   printf("%d valor(es) impar(es)\n",x);
   printf("%d valor(es) positivo(s)\n",y);
   printf("%d valor(es) negativo(s)\n",z);
}
}

