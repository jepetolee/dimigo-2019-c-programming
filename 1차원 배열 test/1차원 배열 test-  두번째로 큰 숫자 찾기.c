#include <stdio.h>
int main() {
	int a[10], temp, k, tmp, q;
	int darktmp, dark;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	temp = a[0];
	for (int i = 0; i < 10; i++) {
		if (temp < a[i]) {
			temp = a[i];
			k = i;
		}
		if (darktmp > a[i]) {
			darktmp = a[i];
			dark = i;
		}
	}
	tmp = a[dark];
	for (int i = 0; i < 10; i++) {
		if (i == k);
		else if (tmp < a[i]) {
			tmp = a[i];
			q = i;
		}
	}
	tmp = a[q];
	a[q] = a[0];
	a[0] = tmp;
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}