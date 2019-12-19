#include <stdio.h>
int main() {
	char a[100] = { '\0' }, b;
	int k = 0;
	scanf("%s", a);
	for (int i = 0; a[i] != NULL; i++) {
		if (a[i] <= 90) {
			a[i] = a[i] + 32;
		}
		else if (a[i] >= 97) {
			a[i] = a[i] - 32;
		}
		printf("%c", (char)a[i]);
	}
}
