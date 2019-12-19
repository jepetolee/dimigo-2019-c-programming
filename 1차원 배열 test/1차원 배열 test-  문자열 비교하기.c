#include <stdio.h>
int main() {
	char a[30] = { 0 }, b[30] = { 0 };
	int k = 0, cnt = 0, ca = 0, cb = 0;
	int k = 0, cnt = 0, ca = 0, cb = 0;
	scanf("%s %s", a, b);
	while (a[ca] != NULL) ca++;
	while (b[cb] != NULL) cb++;
	for (cnt = 0; a[cnt] != NULL; cnt++) {
		if (a[cnt] != b[cnt]) {
			k++;
		}
		cnt++;
	}
	if (k >= 1 || ca != cb) {
		printf("다르다");
	}
	else 	printf("같다");
}
//그럼 HELLO KITTY는 서로 다르네요 하하하