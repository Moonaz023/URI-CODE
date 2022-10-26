#include<stdio.h>
int main()
{
    int p,cc=0,c;
    float n,s=0;
    for(p=0;p<100;p++){
    scanf("%f",&n);
    if(n>=0 && n<=10){
            s=s+n;
        c=1;
    }
    else{
    printf("nota invalida\n");
    c=0;}
    cc=cc+c;
    if (cc==2)
    break;
}
printf("media = %.2f\n",s/2.0);
}
