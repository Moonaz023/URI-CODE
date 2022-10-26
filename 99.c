#include<stdio.h>
int main()
{
    int a,b,i,t,s=0,N,k;
    scanf("%d",&N);

            for(k=0;k<N;k++){
    scanf("%d%d",&a,&b);
    s=0;

    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    else
        {
            a=a;
            b=b;
        }
    for(i=a+1;i<b;i++){
    if(i%2!=0){

        s=s+i;}

    }printf("%d\n",s);}

}


