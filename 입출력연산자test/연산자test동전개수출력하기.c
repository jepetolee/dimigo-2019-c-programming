#include <stdio.h>
int main(){
    int a,b=0,c;
    scanf("%d",&a);
    b=a/5;
    a=a%5;
    b=b+a/3;
    a=a%3;
    b=b+a;
   printf("%d",b);
   
}
