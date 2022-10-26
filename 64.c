#include<stdio.h>
int main ()
{
    int i,p,q=0;
    float n,N=0;
    for(i=1;i<=6;i++){
  for(i=1;i<=6;i++){
    scanf("%f",&n);
    if(n<0){
        n=0;
        p=0;}
    else{
        n=n;
        p=1;}
   q=q+p;
   N=N+n;

   }
    printf("%d valores positivos\n",q);
    printf("%.1f\n",N/q);
}
}
