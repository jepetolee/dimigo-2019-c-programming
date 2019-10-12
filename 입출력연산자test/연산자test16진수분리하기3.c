#include <stdio.h>
int main(){
   int a;
   scanf("%x",&a);
   printf("%x %x %x %x\n",a&0xf000,a&0x0f00,a&0x00f0,a&0x000f);
   printf("0x%x",a|0xaaaa);
}	
