#include <stdio.h>

int main()
{
	int k=0,j=0;
	scanf("%d",&k);
 char a[100][20];
 for(int i=0;i<k;i++){
 	scanf("%s",a[i]);}
 for(int i=0;i<k;i++){
   while(a[i][j]!=NULL)
    {
        j++;
    }
    printf("%c",a[i][j-1]);
    j=0;
	 }
}
