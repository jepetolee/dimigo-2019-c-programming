#include <stdio.h>
int main() {
	int a = 0, b = 0;
	for (b = 1; b <= 9; b++) {
		for (a = 1; a <= 9; a++) {
			printf("%d*%d=%2d\n", b, a, b * a);
		}
	}
}