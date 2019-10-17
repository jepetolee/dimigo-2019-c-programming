#include <stdio.h>
int main() {
	int n, i;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	int dex, j, temp;
	for (i = 0; i < n - 1; i++) {
		dex = i;
		for (j = i + 1; j < n; j++) {
			if (a[dex] < a[j])
				dex = j;
		}
		temp = a[dex];
		a[dex] = a[i];
		a[i] = temp;
	}
	
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
