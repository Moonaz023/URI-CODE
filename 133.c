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

  for(i=a+1;i<b;i++){

    if(i%5==2 ||i%5==3 )
      printf("%d\n",i);

  }


}

