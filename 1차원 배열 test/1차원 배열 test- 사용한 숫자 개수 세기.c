#include <stdio.h>

int main(void)
{
	int a[10] = { 0 }, b[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d ", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (a[i] % 10 == j) {
				b[j]++;
			}
			if (a[i] / 10 == j) {
				b[j]++;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}
