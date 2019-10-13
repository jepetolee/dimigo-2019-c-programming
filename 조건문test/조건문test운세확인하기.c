#include <stdio.h>
int main(){
	int a=0,b=0,c=0,d=0,sum;
	scanf("%4d.%2d.%2d %4d",&a,&b,&c,&d);
	sum=a+b+c+d;
	sum=sum%100-sum%10;
	if(sum%3==0){
		printf("대박나는 해");}
	else if(sum%3==1){
		printf("무난한 해");}
    else if(sum%3==2){
		printf("운이 안좋은 해");}
	}

