#include <stdio.h>
int main(){
	int a=0;
    scanf("%d",&a);
	if ((a>=150)&&(a<160)){
	printf("S");}
	else if ((a>=160)&&(a<170)){
	printf("M");}
	else if ((a>=170)&&(a<180)){
	printf("L");}
	else if (a>=180){
	printf("XL");}
	else {
	printf("맞는 교복이 없습니다.");}}

