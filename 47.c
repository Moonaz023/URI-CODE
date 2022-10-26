//#include<stdio.h>
//int main ()
//{
//    int a,b,c,d,t,h,m,i,f;
//
//    scanf ("%d%d%d%d",&a,&c,&b,&d);
//    if (a>=0&&a<=24&&b>=0&&b<=24&&c>=0&&c<60&&d>=0&&d<60){
//    if (c>d){
//        d=d+60;
//        t=1;}
//        else                       //i could not find the 5% bug
//            {d=d;
//            t=0;}
//
//    if (a>b &&(c!=d || c==d))
//        h=(24-(a-b));
//
//      else if (a<b && (c!=d || c==d))
//        h=b-a;
//
//       else if (a==b && c<d)
//        h=b-a+24;
//
//      else if (a==b && c>=d)
//        h=(b-a)+24;
//
//        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(h-t),(d-c));
//}
//}
///taanjil solve
#include <stdio.h>
int main()
{
    int sh,eh,sm,em,dh,dm;
    scanf("%d %d %d %d", &sh,&sm,&eh,&em);

    dh=eh-sh;

    if(dh<0)
    {
        dh=24+(eh-sh);
    }
    dm=em-sm;
    if(dm<0)
    {
        dm=60+(em-sm);
        dh--;
    }
    if(sh==eh && sm==em)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
    return 0;
}
