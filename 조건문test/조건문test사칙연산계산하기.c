#include <stdio.h>
int main(){
float a,c;
char b;
scanf("%f%1c%f",&a,&b,&c);
if(b=='+'){
     printf("%0.2f",a+c);}	
else if(b=='-'){
     printf("%0.2f",a-c);}		
else if(b=='*'){
     printf("%0.2f",a*c);}	
else if(b=='/'){
     printf("%0.2f",a/c);}	
else printf("�߸��� �������Դϴ�.");} 
