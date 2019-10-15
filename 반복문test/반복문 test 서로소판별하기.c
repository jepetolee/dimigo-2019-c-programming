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
			printf("서로소");
		else
			printf("서로소가 아니다.");
	
	return 0;
}
