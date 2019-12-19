#include <stdio.h>

int sum_position(int a)
{
	int sum = 0;
	while (a) {
		sum += a % 10;
		a = a / 10;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", sum_position(n));
}