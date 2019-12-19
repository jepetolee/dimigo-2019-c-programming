#include <stdio.h>
int main() {
	int a, b, q, k = 1;
	scanf("%d %d", &a, &b);
	int bear[a][b];
	for (int i = 0; i < a; i++) {
		q = k;
		for (int j = 0; j < b; j++) {
			bear[i][j] = q;
			printf("%3d ", bear[i][j]);
			q = q + a;
		}
		k++;
		printf("\n");
	}
}
}