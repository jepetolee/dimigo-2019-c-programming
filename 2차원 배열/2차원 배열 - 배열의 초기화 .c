#include <stdio.h>
int main() {
	int a, b, q = 1;
	scanf("%d %d", &a, &b);
	int bear[a][b];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			bear[i][j] = q;
			printf("%3d ", bear[i][j]);
			q++;
		}
		printf("\n");
	}
}