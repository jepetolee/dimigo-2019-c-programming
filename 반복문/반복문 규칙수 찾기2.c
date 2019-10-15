#include <stdio.h>
 
int main()
{
   int a,b=0,c=3,d=3;
   scanf("%d",&a);
   for(b=1;a-1>=b;b++){
   	c=2*c+3;
   	d=d+c;
   }
	   printf("%d",d);
}
