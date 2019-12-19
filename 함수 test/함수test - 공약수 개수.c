#include <stdio.h>
int CommonDivisorNum(int n, int m) {
	int count = 0;

	for (int i = 1; i <= m || i <= n; i++) {
		if (m % i == 0 && n % i == 0)
			count++;
	}

	printf("%d", count);
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	CommonDivisorNum(n, m);
}