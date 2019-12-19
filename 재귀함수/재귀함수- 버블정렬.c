#include <stdio.h>
void b(int* a, int n) {
	int temp;
	if (n == 1)
		return;
	else {
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
		b(a, n - 1);
	}
}

int main() {
	int a, k[1000];
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
		scanf("%d ", &k[i]);

	b(k, a);

	for (int i = 0; i < a; i++)
		printf("%d ", k[i]);
}