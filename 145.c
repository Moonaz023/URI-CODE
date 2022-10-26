#include<stdio.h>
int main()
{
    int X,i;
    int Y;
    scanf("%d%d",&X,&Y);
    for(i=1;i<=Y;i++){
       printf("%d",i);
      if(i%X==0)
         printf("\n");
         else
            printf(" ");
         }
}

