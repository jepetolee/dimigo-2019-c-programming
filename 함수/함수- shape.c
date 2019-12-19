#include <stdio.h>
void sum(char a, int b) {
	if (a == 't') {
		for (int i = 1; i <= b; i++) {
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else if (a == 'r') {
		for (int i = 1; i <= b; i++) {
			for (int j = 1; j <= b; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}
int main()
{
	char b;
	int a;
	scanf("%c %d", &b, &a);
	sum(b, a);
}
