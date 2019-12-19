#include <stdio.h>
int sum(int a, int b, int c) {
	int k = 0;
	if ((a > b) && (a > c)) {
		k = a;
	}
	else if ((b > c) && (b > a)) {
		k = b;
	}
	else k = c;

	return k;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", sum(a, b, c));
}
