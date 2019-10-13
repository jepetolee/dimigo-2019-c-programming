#include <stdio.h>
int main(){
    float a=0,b=0,bmi=0;
	scanf("%f %f",&a,&b);
	a=a/100;
	bmi=b/(a*a);
	if(bmi<=18.5){
	   printf("저체중");}
     else if((bmi>18.5)&&(bmi<25)){
	   printf("정상");}
     else if((bmi>=25)&&(bmi<30)){
	   printf("과체중");}
	else  printf("비만");}
