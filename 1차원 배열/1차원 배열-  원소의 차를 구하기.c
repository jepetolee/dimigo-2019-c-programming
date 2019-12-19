
#include <stdio.h>
int main() {
	int k, sum = 0, sub = 0;
	scanf("%d", &k);
	int a[k];
	for (int i = 0; i < k; i++)
		scanf("%d ", &a[i]);
	for (int i = 0; i <= k - 2; i++) {
		sub = a[i + 1] - a[i];
		printf("%d ", sub);
		sum += sub;
	}
	printf("\n%d", sum);

}