#include <stdio.h>
int A(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	else {
		A(b, a % b);
	}
}
int main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	printf("%d", A(a, b));
}