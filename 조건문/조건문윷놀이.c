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
   		printf("��");break; 
    case 2:
   		printf("��");break; 
   case 3:
   		printf("��");break; 
   case 4:
   		printf("��");break; 
   default:
   	printf("��");break; }}
