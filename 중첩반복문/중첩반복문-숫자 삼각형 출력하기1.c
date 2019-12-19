#include <stdio.h>
int main() {
	int a, b = 1, c = 1;
	scanf("%d", &a);
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= b; c++) {
			printf("%d", c);
		}
		printf("\n");
	}
}