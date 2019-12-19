#include <stdio.h>
int main()
{
	int a;
	int fac, j;
	int k = 0;
	scanf("%d", &a);

	for (fac = a; ; fac++) {
		for (j = 1; j <= a; j++) {
			if (fac % j != 0)
				k++;
		}

		if (k != 0) {
			k = 0;
			continue;
		}
		else
			break;
	}

	printf("%d", fac);

}