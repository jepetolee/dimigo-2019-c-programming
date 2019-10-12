#include <stdio.h>
int main(){
    int a,b,c,d,sum=0;
    scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
   if((a==1)){
   	sum++;}
   if((b==1)){
   	sum++;}
   if((c==1)){
   	sum++;}
   if((d==1)){
   	sum++;}
   switch(sum){
   	case 1:
   		printf("µµ");break; 
    case 2:
   		printf("°³");break; 
   case 3:
   		printf("°É");break; 
   case 4:
   		printf("À·");break; 
   default:
   	printf("¸ð");break; }}
