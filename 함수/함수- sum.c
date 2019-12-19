#include <stdio.h>
int print_hello(int a, int b, int c) {
	printf("%d", a + b + c);
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	print_hello(a, b, c);
}
