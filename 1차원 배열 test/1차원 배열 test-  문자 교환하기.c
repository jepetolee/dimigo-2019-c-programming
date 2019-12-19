#include <stdio.h>
int main() {
	char a[30] = { 0 }, tmp;
	int k, cnt = 0;
	scanf("%s", a);
	while (a[cnt] != NULL) {
		cnt++;
	}
	tmp = a[cnt - 1];
	a[cnt - 1] = a[0];
	a[0] = tmp;
	printf("%s", a);
}
}