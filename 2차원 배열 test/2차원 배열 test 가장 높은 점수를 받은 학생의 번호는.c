#include <stdio.h>
int main(){
	int a,s[100][3],sum[100]={0};
	scanf("%d",&a);
	for( int i=0;i<a;i++)for( int j=0;j<3;j++){	
	scanf("%d",&s[i][j]);
	sum[i]+=s[i][j];
	}
	int temp=0,i;
	for( i=0;i<a;i++){
		if(sum[temp]<sum[i]){
			temp=i;
		}
	}
	printf("%d",temp+1);
	

}
