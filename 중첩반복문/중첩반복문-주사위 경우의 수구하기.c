#include <stdio.h>
int main() {
	int n, k = 0;

	scanf("%d", &n);
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i + j >= n) k++;
		}
	}
	printf("%d\n", k);
}