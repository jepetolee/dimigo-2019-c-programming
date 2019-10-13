#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%2d%2d%2d-%1d",&a,&b,&c,&d);
if(d==1){
	printf("생일 : 19%02d년 %02d월 %02d일\n성별 : 남자",a,b,c); }
else if(d==2){
	printf("생일 : 19%02d년 %02d월 %02d일\n성별 : 여자",a,b,c); }
else if(d==3){
	printf("생일 : 20%02d년 %02d월 %02d일\n성별 : 남자",a,b,c); }
else if(d==4){
	printf("생일 : 20%02d년 %02d월 %02d일\n성별 : 여자",a,b,c); }} 
