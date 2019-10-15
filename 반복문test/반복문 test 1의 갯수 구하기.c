#include <stdio.h>
int main() {
	int k, cnt = 0,a, b;
	scanf("%d", &k);
	
	for (int i = 0; i <= k; i++) {
		a = i%10; 
		b = i%100/10; 
		if (a == 1)
			cnt++;	
		if (b == 1)
			cnt++;
	}	
	printf("%d", cnt);
}
