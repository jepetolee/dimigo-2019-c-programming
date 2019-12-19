#include <stdio.h>
int main() {
	int a, b, c, d, e, f = 1, g = 1, h = 1;
	scanf("%d", &a);
	f = a;
	b = (a / 2) + 1;
	for (c = 1; c <= b; c++) {
		for (d = 1; d < c; d++) printf(" ");
		for (g = 1; g <= f; g++) printf("*");
		f -= 2;
		printf("\n");
	}
	b -= 1;
	f += 2;
	for (h = 1; b > 0; b--) {
		f += 2;
		for (d = 1; d < b; d++) printf(" ");
		for (g = 1; g <= f; g++) printf("*");
		printf("\n");
	}
}