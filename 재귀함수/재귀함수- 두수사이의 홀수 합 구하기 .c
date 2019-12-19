#include <stdio.h>
int A(int a, int b) {
	if (a == b) {
		return 0;
	}
	if (a % 2 == 1)
		return a + A(a + 1, b);
	else
		return A(a + 1, b);

}
int main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	printf("%d", A(a, b));
}