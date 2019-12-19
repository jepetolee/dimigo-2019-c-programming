#include <stdio.h>

int main() {
	int a, b = 0, c = 0, P[10] = { 0,0,0,0,0,0,0,0,0,0 };
	scanf("%d", &a);
	for (b = 1; b <= a; b++) {
		scanf("%d", &c);
		if (c == 0) {
			P[0]++;
		}
		else if (c == 1) {
			P[1]++;
		}
		else if (c == 2) {
			P[2]++;
		}
		else if (c == 3) {
			P[3]++;
		}
		else if (c == 4) {
			P[4]++;
		}
		else if (c == 5) {
			P[5]++;
		}
		else if (c == 6) {
			P[6]++;
		}
		else if (c == 7) {
			P[7]++;
		}
		else if (c == 8) {
			P[8]++;
		}
		else if (c == 9) {
			P[9]++;
		}
	}
	for (b = 0; b < 10; b++) {
		printf("%d ", P[b]);
	}
}