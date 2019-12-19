#include <stdio.h>
int print_hello(float a) {
	printf("%0.2f", a * a * (3.14));
}
int main()
{
	float a;
	scanf("%f", &a);
	print_hello(a);
}
