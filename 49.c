#include <stdio.h>
#include <string.h>
int main()
{
    char x[15],y[15],z[15];

char a[15]="vertebrado";
  char c[15]="ave";
        char g[15]="carnivoro";
        // char h[15]="onivoro";
    char d[15]="mamifero";
        char h[15]="onivoro";
        char j[15]="herbivoro";
char b[15]="invertebrado";
    char e[15]="inseto";
        char k[15]="hematofago";
        //char j[15]="herbivoro";
    char m[15]="anelideo";
        //char k[15]="hematofago";
       // char h[15]="onivoro";

    scanf("%s%s%s",x,y,z);
    int p = strcmp(x,a);
    if (p==0){
            int q = strcmp(y,c);
    if (q==0){

       int r = strcmp(z,g);
       if (r==0)printf("aguia\n");

         else
            printf("pomba\n");
       }
        else {
                int s=strcmp(z,h);
        if(s==0)printf("homem\n");
        else printf("vaca\n");
       }

    }
    else{
        int t=strcmp(y,e);
        if(t==0){
            int u=strcmp(z,k);
            if(u==0)printf("pulga\n");
            else printf("lagarta\n");
        }
        else{
                 int v=strcmp(z,k);
            if(v==0)printf("sanguessuga\n");
            else  printf("minhoca\n");

        }

    }


  return 0;
}
