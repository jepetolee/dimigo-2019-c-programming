#include <stdio.h>
int main(){
	char s[5][20];
	int a[26]={0};
	for (int i=0;i<5;i++){
		scanf("%s",s[i]);
	}
for (int k=0;k<26;k++){
		for (int i=0;i<5;i++){
		for (int j=0;s[i][j]!=NULL;j++){
		if(s[i][j]==97+k){
			a[k]++;
		}
	}}}
	int temp=0;
	int c=0;
	for(int i=0;i<26;i++){
		if(a[i]>temp){
			temp=a[i];
			c=i;
		}
	}
	printf("%c",c+97);
	}
