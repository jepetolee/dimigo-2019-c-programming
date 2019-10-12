#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a>=0)&&(a<=9)){ 
    printf("어린이");}
   else if((a>=10)&&(a<=19)){ 
    printf("청소년");}
     else if((a>=20)&&(a<=39)){ 
    printf("청년");}
      else if((a>=40)&&(a<=59)){ 
    printf("장년");}
      else{ 
    printf("노년");
    }}


