#include<stdio.h>
int main ()
{
    int i,p,q=0,n;
    for(i=1;i<=6;i++){
  for(i=1;i<=6;i++){
    scanf("%d",&n);
    if(n<0)
        p=0;
    else
        p=1;
   q=q+p;

   }
    printf("%d\n",q);
}

}
