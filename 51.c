#include <stdio.h>
int main()
{
  float s,p,j,k;
 scanf ("%f",&s);
 if (s<=2000){
        printf("Isento\n");}
else
{
  if (s>2000.00 && s<=3000.00){
        float a=s-2000;
    j=((a*8)/100.0);
  }
  if (s>3000.00 && s<=4500.00){
    float a=1000;
    float b=(s-3000);
    j=((a*8)/100.0)+(b*18)/100.0;
  }
  if (s>4500.00){
        float a=1000;
    float b=(1500);
  float c=(s-4500);
    j=((a*8)/100.0)+((b*18)/100)+((c*28)/100.0);
 }
 printf ("R$ %.2f\n",j);
}

}

