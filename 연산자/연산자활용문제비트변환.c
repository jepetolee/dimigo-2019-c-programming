#include <stdio.h>
 
int main()
{ 
 int a;

 scanf("%x",&a);
 a=a^0xffff;
 printf("0x%04x",a);
    return 0;
}
