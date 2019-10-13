#include <stdio.h>
int main() {
	int a=0,b=0;
	scanf("%2d:%2d",&a,&b);
	if((a==0)&&(b<35)){
		a=23;
		b=b+25;}
	else if(b<35){
		a=a-1;
		b=b+25;}
	else{
		b=b-35;} 
   printf("%02d:%02d",a,b);}
