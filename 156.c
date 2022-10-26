#include<stdio.h>
int main()
{
 float i,j=1,s=0;
 for(i=3;i<=39;i=i+2){
        j=j*2;
        s=s+(i/j);
    }
 printf("%.2f\n",s+1);
}
