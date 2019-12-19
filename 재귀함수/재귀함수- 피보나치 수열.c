#include <stdio.h>
int A(int a) {
	if (a == 1)
		return 0;
	else if (a == 2)
		return 1;
	else
		return A(a - 1) + A(a - 2);
}
int main() {
	int a;
	scanf("%d", &a);
	printf("%d", A(a));
}
