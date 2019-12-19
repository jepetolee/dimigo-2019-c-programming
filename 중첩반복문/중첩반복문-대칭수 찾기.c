#include <stdio.h>

int main() {
	int a, b;
	int c, d, e;
	int k, g = 1;
	int i, j;

	for (i = 100; i < 1000; i++) {
		for (j = 100; j < 1000; j++) {
			a = (i * j) / 1000; // 906
			b = (i * j) % 1000; // 609

			c = b % 10; // 9
			d = b / 10 % 10; // 0
			e = b / 100; // 6
			b = (c * 100) + (d * 10) + e;
			if (a == b)
				k = i * j;
			if (k > g)
				g = k;
		}
	}
	printf("%d", g);
}