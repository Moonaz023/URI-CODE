#include<stdio.h>
int main ()
{
    char a[4],b[4],c[2],i[2],e[2],f[2],g[2];
    int d,h,m,s,dd,hh,mm,ss,H,M,S,D;
    // printf("Dia ");
     scanf("%s%d",a,&d);
     scanf("%d%s%d%s%d",&h,c,&m,i,&s);
      //printf("Dia ");
     scanf("%s%d",b,&dd);
     scanf("%d%s%d%s%d",&hh,e,&mm,f,&ss);


   // scanf("%d%d%d%d%d%d%d%d",&d,&h,&m,&s,&dd,&hh,&mm,&ss);
    S=ss-s;
    M=mm-m;
    H=hh-h;
    D=dd-d;
    if(S<0){
        S=S+60;
        M--;
    }
    if(M<0){
        M=60+M;
        H--;
    }
    if(H<0){
        H=24+H;
        D--;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",D,H,M,S);
}
