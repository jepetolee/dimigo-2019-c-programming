#include <stdio.h>
int main() {
	char a[100] = { '\0' };
	int k = 0;
	scanf("%s", a);
	scanf("%d", &k);
	for (int i = 0; a[i] != NULL; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z')
			printf("%c", (a[i] + k - 'A') % 26 + 'A');
		else if (a[i] >= 'a' && a[i] <= 'z')
			printf("%c", (a[i] + k - 'a') % 26 + 'a');
	}

}