#include <stdio.h>
int main(){
   int a,b,c,d,e,f,g,h,cdd=0;
   scanf("%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h);
   if (a == 0)cdd++;
   if (b == 0)cdd++; 
   if (c == 0)cdd++;
   if (d == 0)cdd++;
   if (e == 0)cdd++;
   if (f == 0)cdd++;
   if (g == 0)cdd++;
   if (h == 0)cdd++;
   printf("%d",cdd);
}	
