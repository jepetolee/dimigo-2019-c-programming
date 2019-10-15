#include <stdio.h>
int main() {
	int a=0,b=0,c=0,k=1000000;
	scanf("%d",&a);
	while(b<=6){
	c=c+(a/k);
	a=a%k;
	k=k/10;
	b++;
	}
	printf("%d",c);
}
