#include <stdio.h>
int main() {
	char a[30] = { 0 };
	int k, cnt = 0;
	scanf("%s", a);

	scanf("%d", &k);
	for (int i = 0; a[i] != NULL; i++) {
		for (int j = 1; j <= k; j++) {
			printf("%c", a[i]);
		}
	}
}