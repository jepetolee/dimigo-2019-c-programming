#include <stdio.h>
int main() {
	int n, k;
	int list[100];
	scanf("%d", &n);
	for (k = 0; k < n; k++) scanf("%d", &list[k]);
  int i, j, temp;

  for(i=n-1; i>0; i--){

    for(j=0; j<i; j++){
      if(list[j]<list[j+1]){
        temp = list[j];
        list[j] = list[j+1];
        list[j+1] = temp;
      }
    }
}
	
	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
}

