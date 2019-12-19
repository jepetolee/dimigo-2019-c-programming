#include <stdio.h>

int main() {
	float P[10] = { 0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9 };
	int a, b = 0;
	scanf("%d", &a);
	for (b = 0; b < 10; b++) {
		printf("%0.1f ", P[b] + a);
	}
}