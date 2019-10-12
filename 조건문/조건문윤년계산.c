#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a%4==0)&&(a%100!=0)){
    	printf("%d년은 윤년입니다.",a);}
	else if((a%100==0)&&(a%400==0)){
    	printf("%d년은 윤년입니다.",a);}
	else printf("%d년은 윤년이 아닙니다.",a);}

