#include <stdio.h>
int main()
{
	int N;
	int a = 0, b = 0;
	int cnt = 0;
	int q;
	scanf("%d", &N);
	for (int p = 2; p <= N; p++) {
		for (int i = 2; i < p; i++) {
			if (p % i == 0) {
				a++;
				break;
			}
		}
		q = p + 2;
		for (int j = 2; j < q; j++) {
			if (q % j == 0) {
				b++;
				break;
			}
		}

		if (a == 0 && b == 0)
			cnt++;
		a = 0;
		b = 0;
	}
	printf("%d", cnt);

	return 0;
}