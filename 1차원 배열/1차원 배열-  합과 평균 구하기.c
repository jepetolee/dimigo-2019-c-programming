#include <stdio.h>

int main() {
	int a, b = 0, c = 0, P[7] = { 0,0,0,0,0,0,0 }, sum = 0;
	float avg = 0;
	for (b = 0; b <= 6; b++) {
		scanf("%d", &P[b]);

	}
	for (b = 0; b <= 6; b++) {
		sum = P[b] + sum;

	}
	avg = (float)sum / 7;
	printf("%d\n%0.2f", sum, avg);

}