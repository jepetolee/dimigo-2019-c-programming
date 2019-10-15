#include <stdio.h>
int main() {
	int k,f ,sum = 0;;
	scanf("%d %d", &k,&f);
	
	for (int i = k; i <= f; i++) {
		if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
			sum++;
		if ((i % 100) / 10 == 3 || (i % 100) / 10 == 6 || (i % 100) / 10 == 9)
			sum++;
		if ((i % 1000) / 100 == 3 || (i % 1000) / 100 == 6 || (i % 1000) / 100 == 9)
			sum++;
		if (i / 1000 == 3 || i / 1000 == 6 || i / 1000 == 9)
			sum++;
	}
	
	printf("%d", sum);
	return 0;
}
