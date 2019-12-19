#include <stdio.h>

int main() {
	int a[10], b = 0, c, i;
	for (b = 0; b < 10; b++) {
		scanf("%d ", &a[b]);
	}
	scanf("%d", &c);
	for (i = 0; i < 10; i++) {
		if (a[i] == c) {
			printf("%d", i); break;
		}
	}
	if (a[i] != c) {
		printf("-1");
	}
}