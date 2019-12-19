#include <stdio.h>
int main() {
	int a, b, cdd = 0, i = 0, t = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		t = i;
		if (t % 2 == 0) {
			while (t % 2 == 0) {
				t /= 2;
				cdd++;
			}
		}
	}
	printf("%d", cdd);
}