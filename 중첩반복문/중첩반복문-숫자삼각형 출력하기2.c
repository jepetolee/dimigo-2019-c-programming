#include<stdio.h>
int main() {
	int a, b = 1, c, k = 2;
	scanf("%d", &a);
	for (c = 1; c <= (a * a + a) / 2; c++) {
		printf("%3d", c);
		if (b == c) {
			printf("\n"); b += k++;
		}
	}

}
