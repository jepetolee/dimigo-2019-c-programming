#include <stdio.h>

void triangle_size(float a)
{
	float sum = 0;
	sum = a * a / 2;
	printf("%0.2f\n", sum);
}
void print_triangle(int a) {
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}


int main() {
	int n;
	scanf("%d", &n);
	triangle_size(n);
	print_triangle(n);
}