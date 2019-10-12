#include <stdio.h>
int main(){
   int num, count = 0;
   scanf("%d", &num);
   if (num >= 10000000)
   {
      num -= 10000000;
      count++;
   }
   if (num >= 1000000)
   {
      num -= 1000000;
      count++;
   }
   if (num >= 100000)
   {
      num -= 100000;
      count++;
   }
   if (num >= 10000)
   {
      num -= 10000;
      count++;
   }
   if (num >= 1000)
   {
      num -= 1000;
      count++;
   }
   if (num >= 100)
   {
      num -= 100;
      count++;
   }
   if (num >= 10)
   {
      num -= 10;
      count++;
   }
   if (num >= 1)
      count++;
   printf("%d", count);
   return 0;
}

