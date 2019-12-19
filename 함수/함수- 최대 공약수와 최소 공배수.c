#include <stdio.h>
void count(int a, int b) {

	int k = b, c;
	int q = a;
	while (a) {
		c = a;
		a = b % a;
		b = c;
	}
	printf("%d %d\n", b, k * q / b);
}
int main()
{
	int a, b, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		count(a, b);
	}
}
