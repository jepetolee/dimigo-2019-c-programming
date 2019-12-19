#include <stdio.h>

int main()
{
	int a, b, c = 0, d = 0, e = 0;
	scanf("%d", &a);
	c = a;

	for (b = 1; b <= a; b++) {
		for (e = 1; e <= b - 1; e++) {
			printf(" ");
		}
		for (d = 1; d <= 2 * c - 1; d++) {
			printf("*");
		}
		c--;
		printf("\n");
	}
}