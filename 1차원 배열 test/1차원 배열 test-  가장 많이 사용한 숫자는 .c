#include <stdio.h>

int main()
{
	char a[31];
	int count[26] = { 0 }, i, tmp = 0;

	scanf("%s", a);

	for (i = 0; a[i] != NULL; i++)
		count[a[i] - 'a']++;

	for (i = 0; i < 26; i++) {
		if (count[tmp] < count[i])
			tmp = i;
	}

	printf("%c", 'a' + tmp);
}
