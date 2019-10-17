#include <stdio.h>
int main(){
	char s[5][20],temp,sou[5]={0};
	for (int i=0;i<5;i++){
		scanf("%s",s[i]);
	}
	for (int i=0;i<5;i++){
		for (int j=0;s[i][j]!=NULL;j++){
		if(s[i][j]>sou[i]){
			sou[i]=s[i][j];
		}
	}}
	for(int i=0;i<5;i++){
		printf("%c",sou[i]);
	}
	}
