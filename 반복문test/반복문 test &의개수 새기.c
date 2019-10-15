#include <stdio.h>

int main() {
	int a=0,b=0,cdd=0;
	char k ;
	scanf("%d",&a);
	for( b= 1;b<=a+1;b++){
		scanf("%c",&k);
		if(k=='&') cdd++;
	}
	printf("%d",cdd);
}
