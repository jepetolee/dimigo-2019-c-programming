#include <stdio.h>
int main() {
	int a[40][40];
	int m, n, i, j, sum = 0;
	scanf("%d", &m);
	
	for (i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < m; j++) {
			scanf("%d ", &a[i][j]);
			sum += a[i][j];
		}
		a[i][j] = sum;
	}
	
	for (j = 0; j <m ; j++) {
		sum = 0;
		for (i = 0; i < m; i++)
			sum += a[i][j];
		a[i][j] = sum;
	}
	
	for (i = 0; i < m+1; i++) {
		for (j = 0; j < m+1; j++) {
			if (i == m && j == m) break;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
