#include <stdio.h>
int main() {
	char b[5][100], temp;
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%s", b[i]);
	}
	for (i = 4; i >= 0; i--) {
		printf("%s ", b[i]);
	}
}