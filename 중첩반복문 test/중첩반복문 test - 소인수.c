#include <stdio.h>
int main() {
	int a, b = 1, c;
	scanf("%d", &a);
	for (int i = 2; a > 1; i++) {
		if (a % i == 0) {
			while (a % i == 0) {
				a = a / i;
			}
			printf("%d ", i);
		}
	}
}
