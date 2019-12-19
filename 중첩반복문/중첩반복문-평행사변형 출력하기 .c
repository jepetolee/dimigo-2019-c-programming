#include <stdio.h>
int main() {
	int a, b, c, d, e, f = 1, g = 1, h = 1;
	scanf("%d %d", &a, &b);
	c = b;
	b = b - 2;
	while (f <= a) {
		f++;
		printf("*");
	}
	printf("\n");
	for (int i = 1; i < c - 1; i++) {
		for (d = 0; d < i; d++) printf(" ");
		printf("*");
		for (e = 1; e <= a - 2; e++) printf(" ");
		printf("*");
		printf("\n");
	}
	while (h <= c - 1) {
		h++;
		printf(" ");
	}
	while (g <= a) {
		g++;
		printf("*");
	}
}