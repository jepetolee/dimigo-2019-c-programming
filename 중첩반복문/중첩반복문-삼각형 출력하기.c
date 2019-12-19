#include <stdio.h>

int main()
{
	int a, b, c = 0, d = 0, e = 0;
	scanf("%d", &a);
	e = a;
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= e - 1; c++) {
			printf(" ");
		}
		for (d = 1; d <= 2 * b - 1; d++) {
			printf("*");
		}
		e--;
		printf("\n");
	}
}