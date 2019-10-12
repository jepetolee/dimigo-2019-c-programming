#include <stdio.h>
 
int main(){
   int a;
   scanf("%x",&a);
   printf("0x%04x",a&0xff00);
}
