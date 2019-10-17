#include <stdio.h>
int main() {
	int a[40][40];
	int m, n, i, j, sum = 0;
	scanf("%d", &m);
	
	for (i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < 2; j++) {
			scanf("%d ", &a[i][j]);
			sum += a[i][j];
		}
		a[i][j] = sum;
	}

	
	for (i = 0; i < m; i++) {
		for (j = 0; j < 2+1; j++) {
			if (j == 2){
				if(a[i][j]>=90){
			printf("A");
		}
		else if((80<=a[i][j])&&(90>a[i][j])){
			printf("B");
		}
		else printf("C");;
			}
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
