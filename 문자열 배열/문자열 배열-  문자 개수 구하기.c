#include <stdio.h>
int main() {
	char a[100] = { '\0' }, b;
	int k = 0;
	scanf("%s", a);
	scanf("%s", &b);
	for (int i = 0; a[i] != NULL; i++) {
		if (a[i] == b) {
			k++;
		}
	}
	printf("%d", k);
}