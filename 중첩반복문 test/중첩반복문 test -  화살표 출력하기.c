#include <stdio.h>
int main() {
	int a, b, c, h, g = 0;
	scanf("%d %d", &a, &b);

	if (a > 0) {
		h = (a - 1) / 2 + 1;
		for (int i = 1; i <= h; i++) {
			for (int k = 1; k <= g; k++) {
				printf(" ");
			}
			for (int k = 1; k <= b; k++) {
				printf("*");
			}
			g++;
			printf("\n");
		}
		g -= 2;
		for (int i = 1; i < h; i++) {
			for (int k = 1; k <= g; k++) {
				printf(" ");
			}
			for (int k = 1; k <= b; k++) {
				printf("*");
			}
			g--;
			printf("\n");
		}
	}
	else if (a < 0) {
		a *= -1;
		h = (a - 1) / 2 + 1;
		g = h - 1;
		for (int i = 1; i <= h; i++) {
			for (int k = 1; k <= g; k++) {
				printf(" ");
			}
			for (int k = 1; k <= b; k++) {
				printf("*");
			}
			g--;
			printf("\n");
		}
		g += 2;
		for (int i = 1; i < h; i++) {
			for (int k = 1; k <= g; k++) {
				printf(" ");
			}
			for (int k = 1; k <= b; k++) {
				printf("*");
			}
			g++;
			printf("\n");
		}
	}
}