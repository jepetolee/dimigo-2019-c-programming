#include <stdio.h>
void print_hello() {
	printf("Hello\n");
}
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		print_hello();
	}
}
