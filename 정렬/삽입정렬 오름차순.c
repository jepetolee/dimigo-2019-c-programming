#include <stdio.h>
int main() {
	int n, k;
	int list[100];
	scanf("%d", &n);
	for (k = 0; k < n; k++) scanf("%d", &list[k]);
	int i,j,key;
 for(i=1; i<n; i++){
    key = list[i];
    for(j=i-1; j>=0 && list[j]>key; j--){
      list[j+1] = list[j];
    }

    list[j+1] = key;
  }
	
	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
}
