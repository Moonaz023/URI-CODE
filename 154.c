#include<stdio.h>
int main()
{
    int a,i,c=0,s=0;
    float sf;
    for(i=0;i<100;i++){
      scanf("%d",&a);
       if(a>0){
       s=s+a;
       c++;}
      else
        break;
    }
    sf=s;
    printf("%.2f\n",sf/c);
}
