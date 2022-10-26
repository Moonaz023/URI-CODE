#include<stdio.h>
int main()
{
    int X,i;
    read:
    scanf("%d",&X);
    if(X==0)
        return 0;
    else
    for(i=1;i<=X;i++){
       printf("%d",i);
       if(i!=X)
        printf(" ");
       if(i==X){
            printf("\n");
        goto read;}

         }
}

