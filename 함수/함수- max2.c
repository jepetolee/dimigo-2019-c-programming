#include <stdio.h>
int sum(int a, int b, int c, int d) {
	int k = 0;
	if ((a > b) && (a > c) && (a > d)) {
		k = a;
	}
	else if ((b > c) && (b > a) && (b > d)) {
		k = b;
	}
	else if ((c > a) && (c > b) && (c > d)) {
		k = c;
	}
	else k = d;

	return k;
}
int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", sum(a, b, c, d));
}