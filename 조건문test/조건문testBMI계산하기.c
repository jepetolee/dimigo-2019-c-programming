#include <stdio.h>
int main(){
    float a=0,b=0,bmi=0;
	scanf("%f %f",&a,&b);
	a=a/100;
	bmi=b/(a*a);
	if(bmi<=18.5){
	   printf("��ü��");}
     else if((bmi>18.5)&&(bmi<25)){
	   printf("����");}
     else if((bmi>=25)&&(bmi<30)){
	   printf("��ü��");}
	else  printf("��");}
