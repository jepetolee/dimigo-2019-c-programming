#include <stdio.h>
int print_N(int n) {
	if (n < 1) {
		return 0;
	}
	else {
		print_N(n - 1);
		for (int i = 0; i < n; i++)
			printf("*");
		printf("\n");
	}

}
int main() {
	int a;
	scanf("%d", &a);
	print_N(a);
}
