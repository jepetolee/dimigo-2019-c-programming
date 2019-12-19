#include <stdio.h>
int main() {
	int a, b = 1, c, h, g = 0;
	scanf("%d", &a);

	h = (a - 1) / 2;
	for (int i = 1; i <= h; i++) {
		for (int k = 1; k <= b; k++) {
			printf("*");
		}
		for (int k = 1; k <= a - 2 * b; k++) {
			printf(" ");
		}
		for (int k = 1; k <= b; k++) {
			printf("*");
		}
		printf("\n");
		b++;
	}
	for (int i = 1; i <= a; i++) {
		printf("*");
	}
	b--;
	printf("\n");
	for (int i = 1; i <= h; i++) {
		for (int k = 1; k <= b; k++) {
			printf("*");
		}
		for (int k = 1; k <= a - 2 * b; k++) {
			printf(" ");
		}
		for (int k = 1; k <= b; k++) {
			printf("*");
		}
		printf("\n");
		b--;
	}
}