#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d", &a);
	b = (a - 1) / 2;
	c = b;
	for (int i = 1; i <= (a - 1) / 2; i++) {
		for (int j = 1; j <= b; j++) {
			printf(" ");
		}
		b--;
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	b++;
	for (int i = 1; i <= a; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1; i <= (a - 1) / 2; i++) {
		for (int j = 1; j <= b; j++) {
			printf(" ");
		}
		b++;
		for (int j = 1; j <= 2 * c - 1; j++) {
			printf("*");
		}
		c--;
		printf("\n");
	}
}