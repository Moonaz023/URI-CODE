#include<stdio.h>
int main()
{
  int a,b,t,s=0,i=0;
  scanf("%d%d",&a,&b);
  if(b<a){
    t=b;
    b=a;
    a=t;
  }
  else{
    a=a;
    b=b;
  }

  for(i=a;i<=b;i++){

    if(i%13!=0)
       s=s+i;

  }
  printf("%d\n",s);

}
