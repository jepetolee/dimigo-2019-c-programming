#include <stdio.h>
int main() {
	int a, b = 1, c;
	scanf("%d", &a);
	b = a;
	c = a;
	for (int i = 1; i <= a; i++) {
		for (int j = b - 2; j >= 0; j--) {
			printf(" ");
		}
		b--;
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	b = 0;
	for (int i = 1; i <= a - 1; i++) {
		for (int j = b; j >= 0; j--) {
			printf(" ");
		}
		b++;
		for (int j = 1; j <= c - 1; j++) {
			printf("*");
		}
		c--;
		printf("\n");
	}
}