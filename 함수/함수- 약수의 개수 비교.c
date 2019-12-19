#include <stdio.h>
void count(int a, int b) {
	int c = a, cnt1 = 0;
	int d = b, cnt = 0;
	for (int i = 2; c > 1; i++) {
		if (c % i == 0) {

			while (c % i == 0) {
				cnt1++;
				c /= i;
			}
		}
	}
	for (int i = 2; d > 1; i++) {
		if (d % i == 0) {

			while (d % i == 0) {
				cnt++;
				d /= i;
			}
		}
	}
	if (cnt == cnt1) {
		printf("%d %d", a, b);
	}
	else if (cnt > cnt1) {
		printf("%d", b);
	}
	else if (cnt1 > cnt) {
		printf("%d", a);
	}
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	count(a, b);
}