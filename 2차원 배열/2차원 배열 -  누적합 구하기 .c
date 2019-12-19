#include <stdio.h>
int main() {
	int a[40][40];
	int m, n, i, j, sum = 0;
	scanf("%d %d", &m, &n);

	for (i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < n; j++) {
			scanf("%d ", &a[i][j]);
			sum += a[i][j];
		}
		a[i][j] = sum;
	}

	for (j = 0; j < n; j++) {
		sum = 0;
		for (i = 0; i < m; i++)
			sum += a[i][j];
		a[i][j] = sum;
	}

	for (i = 0; i < m + 1; i++) {
		for (j = 0; j < n + 1; j++) {
			if (i == m && j == n) break;
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
}