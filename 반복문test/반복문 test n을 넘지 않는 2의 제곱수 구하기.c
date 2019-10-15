#include <stdio.h>

int main() {
	int a, b=0,c=2;
	scanf("%d", &a);
    for(b=1;c<a;b++){
    	c*=2;
	}
	printf("%d",b-1);
}
