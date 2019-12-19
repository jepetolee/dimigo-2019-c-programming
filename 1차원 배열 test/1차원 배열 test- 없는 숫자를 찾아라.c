#include <stdio.h>
int main() {
	int a[10] = { 0 }, b, cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d ", &b);
		a[b]++;
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > 0) {
			cnt++;
		}
		else
			printf("%d ", i);
	}
	if (cnt == 10) {
		printf("NULL");
	}


}