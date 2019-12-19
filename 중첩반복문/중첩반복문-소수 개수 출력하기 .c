#include <stdio.h>
int main() {
	int a, b = 0, j;
	scanf("%d", &a);
	for (int i = 2; i < a; i++) {
		for (j = 2; j < i; j++) if (!(i % j)) break;
		if (j == i) b++;
	}
	printf("%d", b);
}