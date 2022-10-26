#include<stdio.h>
int main()
{
   float i,j,c=0;

    for(i=0.0;i<2.1;i=i+.2)
        for(j=(0+i);j<=(i+2.1);j++)
    {
        if(i>0.0&&i<1.0)
  printf("I=%.1f J=%.1f\n",i,j+1);
    else if(i>1.0&&i<2.0)
  printf("I=%.1f J=%.1f\n",i,j+1);
  else{
    int p=i;
    int q=j;
    printf("I=%d J=%d\n",p,q+1);
  }
    }

}

