#include <stdio.h>

int main(void)
{
	int k, a[1000] = { 0 }, i = 0;
	scanf("%d", &k);
	while (k > 2) {
		if (k % 2 == 1) {
			k = (k) / 2;
			a[i] = 1;
		}
		else if (k % 2 == 0) {
			k = k / 2;
			a[i] = 0;
		}
		i++;
	}
	if (k % 2 == 0)
	{
		a[i++] = 0;
		a[i] = 1;
	}
	else
	{
		a[i] = 1;
	}
	for (int k = i; k >= 0; k--) {
		printf("%d", a[k]);
	}
}