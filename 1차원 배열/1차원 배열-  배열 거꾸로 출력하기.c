#include <stdio.h>

int main() {
	int P[10], b = 0;
	for (b = 0; b < 10; b++) {
		scanf("%d", &P[b]);
	}
	for (b = 9; b >= 0; b--) {
		printf("%d ", P[b]);
	}
}