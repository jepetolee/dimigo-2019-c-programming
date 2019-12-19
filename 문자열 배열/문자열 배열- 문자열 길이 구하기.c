#include <stdio.h>
int main() {
	char a[20], cdd = 0;
	scanf("%s", a);
	for (int i = 0; a[i] != NULL; i++) {
		cdd++;
	}
	printf("%d", cdd);
}