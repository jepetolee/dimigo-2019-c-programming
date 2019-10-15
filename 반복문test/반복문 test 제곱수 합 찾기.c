#include <stdio.h>
int main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = a; i < 1000000; i *= a) {
		sum += i;
	}
	printf("%d", sum);
}
