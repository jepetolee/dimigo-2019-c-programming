#include <stdio.h> 
int main(){
   int a,b=0,c;
   scanf("%d",&a);
   c=a;
   for(b=1;a-1>=b;b++){
   	if(a%b==0){
   		a=a/b;
	   }
   }
	if(a==c){
		printf("�Ҽ��̴�.");
	}
	else printf("�Ҽ��� �ƴϴ�.");
}
