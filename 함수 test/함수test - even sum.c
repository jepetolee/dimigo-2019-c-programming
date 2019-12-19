#include <stdio.h>

int even_sum(int a)
{
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", even_sum(n));
}