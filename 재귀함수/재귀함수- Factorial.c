#include <stdio.h>
int print_N(int n) {
	int sum = 1;
	if (n < 1)
		return 1;
	else {
		while (n > 1) {
			sum *= n;
			n--;
		}
	}
	printf("%d", sum);
}

int main() {
	int n;
	scanf("%d", &n);
	print_N(n);
}