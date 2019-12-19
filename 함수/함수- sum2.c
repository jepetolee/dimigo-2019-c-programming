#include <stdio.h>
int sum(int a) {
	int c = 0;
	for (int i = 1; i <= a; i++) {
		c += i;
	}
	return c;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", sum(b) + sum(a));
}
