#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d", &a);
	for (c = 1; c <= a; c++) {
		if (c % 2 == 1) {
			for (b = a * (c - 1) + 1; b <= a * c; b++) {
				printf("%2d ", b);
			}printf("\n");
		}
		else {
			for (b = a * c; b >= a * (c - 1) + 1; b--) {
				printf("%2d ", b);
			}printf("\n");
		}
	}
}