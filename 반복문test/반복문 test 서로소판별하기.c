#include <stdio.h>

int main() {
	int a, b, r;
	scanf("%d %d", &a, &b);
	
	while (b > 0) {
		r = a % b;
		a = b;
		b = r;
	}
	
	if (a == 1)
			printf("���μ�");
		else
			printf("���μҰ� �ƴϴ�.");
	
	return 0;
}
