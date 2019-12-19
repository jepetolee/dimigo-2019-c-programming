#include <stdio.h>
int main() {
	int a[10], max, min, temp;

	for (int i = 0; i < 10; i++)
		scanf("%d ", &a[i]);

	a[max] = a[0];
	a[min] = a[0];

	for (int i = 0; i < 10; i++) {
		if (a[i] > a[max])
			max = i;

		if (a[i] < a[min])
			min = i;
	}

	temp = a[max];
	a[max] = a[min];
	a[min] = temp;

	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
}