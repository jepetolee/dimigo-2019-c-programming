#include <stdio.h>
 
int main()
{
 int a,b,org=1;
 scanf("%d",&a);
 for(b=2;b<=a;b++){
 	if(b%2==1){
 		org+=5;
		}
	else if(b%2==0){
 		org-=3;
		}
	}
 	printf("%d",org);
}
