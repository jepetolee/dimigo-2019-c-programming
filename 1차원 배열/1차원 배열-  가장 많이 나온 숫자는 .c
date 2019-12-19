#include <stdio.h>

int main(void)
{
	int i, max = 0, n;
	int a[10] = { 0 };

	for (i = 0; i < 10; i++) {
		scanf("%d ", &n);
		a[n]++;
	}

	for (i = 0; i < 10; i++) {
		if (a[max] <= a[i])
			max = i;
	}

	printf("%d", max);

	return 0;
}