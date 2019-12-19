#include <stdio.h>
int print_N(int n) {
	if (n < 1)
		return 1;
	else {
		print_N(n - 1);
		printf("%d ", n);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	print_N(n);
}