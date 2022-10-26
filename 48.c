#include <stdio.h>
int main()
{
  float s,i;
  int j;
  scanf ("%f",&s);
  if (s>0 && s<=400.00){
    i=(s*15)/100.0;
    j=15;
  }
  if (s>400.00 && s<=800.00){
    i=(s*12)/100.0;
    j=12;
  }
  if (s>800.00 && s<=1200.00){
    i=(s*10)/100.0;
    j=10;
  }
  if (s>1200.0 && s<=2000.00){
    i=(s*7)/100.0;
    j=7;
  }
  if (s>2000.00){
    i=(s*4)/100.0;
    j=4;
  }
    printf ("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(s+i),i,j);





}
