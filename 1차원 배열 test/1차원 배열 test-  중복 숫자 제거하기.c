#include <stdio.h>
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				a[i] = 11;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != 11) {
			printf("%d ", a[i]);
		}
	}
}