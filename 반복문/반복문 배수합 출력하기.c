#include <stdio.h>
 
int main()
{
   int a,b=0,cdd=0;
   scanf("%d",&a);
   for(b=1;a*b<=1000;b++){
   	cdd+=a*b;
	   } 
	   printf("%d",cdd);
}
