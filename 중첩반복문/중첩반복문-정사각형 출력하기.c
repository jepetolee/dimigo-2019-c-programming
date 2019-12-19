#include <stdio.h>
int main() {
	int a = 0, b = 0, c;
	scanf("%d", &b);
	for (c = 1; c <= b; c++) {
		for (a = 1; a <= b; a++) {
			printf("*");
		}
		printf("\n");
	}
}