#include <stdio.h>
int main() {
	float a[40][40], sum = 0;
	int m, i, j;
	scanf("%d", &m);
	
	for (i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < 3; j++) {
			scanf("%f ", &a[i][j]);
			sum += a[i][j];
		}
		a[i][j] = sum/3;
	}
	
	for (j = 0; j < 3; j++) {
		sum = 0;
		for (i = 0; i < m; i++)
			sum += a[i][j];
		a[i][j] = sum/m;
	}
	
	for (i = 0; i < m+1; i++) {
		for (j = 0; j < 4; j++) {
			if (i == m && j == 3) break;

			printf("%5.1f ", a[i][j]);
		}
		printf("\n");
	}
}	
