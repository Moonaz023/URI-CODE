#include<stdio.h>
int main()
{
    int i,n,a,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>=10&&a<=20){
            j=1;
            k=k+j;
        }
    }printf("%d in\n",k);
    printf("%d out\n",(n-k));
}
