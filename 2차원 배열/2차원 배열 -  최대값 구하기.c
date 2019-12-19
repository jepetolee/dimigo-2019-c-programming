#include <stdio.h>
int main() {
	int a[40][40];
	int m, n, i, j, sum = 0;
	scanf("%d %d", &m, &n);

	for (i = 0; i < m; i++) {
		sum = a[i][0];

		for (j = 0; j < n; j++) {
			scanf("%d ", &a[i][j]);

			if (sum < a[i][j])
				sum = a[i][j];
		}

		a[i][j] = sum;
	}

	for (j = 0; j < n; j++) {
		sum = a[0][j];

		for (i = 0; i < m; i++) {
			if (sum < a[i][j])
				sum = a[i][j];
		}

		a[i][j] = sum;
	}

	sum = a[0][0];
	for (i = 0; i < m; i++) {
		if (sum < a[i][i])
			sum = a[i][i];
	}
	a[i][i] = sum;


	for (i = 0; i < m + 1; i++) {
		for (j = 0; j < n + 1; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}