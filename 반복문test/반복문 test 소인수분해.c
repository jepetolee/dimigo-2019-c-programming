#include <stdio.h>
 
int main()
{
 int a,b=0,c=0,d=0;
 scanf("%d",&a);
 while(a%2==0){
 	if(a%2==0){
 		a=a/2;
 		b++;}}
	while(a%3==0){
 	if(a%3==0){
 		a=a/3;
 		c++;}}
	while(a%5==0){
 	if(a%5==0){
 		a=a/5;
 		d++;}}
	 printf("%d %d %d",b,c,d); 	
}

