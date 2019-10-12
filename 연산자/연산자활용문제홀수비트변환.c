#include <stdio.h>
 
int main()
{ 
  int a;
  scanf("%x",&a);
	a=a|0x5555;
  printf("0x%x",a);
	return 0;
}

