#include <stdio.h>
int main() {
	int a = 1, b = 2, c = 0, k, sum = 0;;
	scanf("%d", &k);
	
	for (int i = 1; a < k; i++) {
		if (k == 1) break;
		c = a;
		a = b;
		b = a + c;
		if (i % 2 == 1)
			sum += c;
	}	
	printf("%d", sum);
}
