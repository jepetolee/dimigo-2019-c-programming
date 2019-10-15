#include <stdio.h>
 
int main()
{
 int a,b,cdd=0,sum=0;
 scanf("%d",&a);
 for(b=1;b<=a;b++){
 	if(a%b==0){
 		cdd++;
 		sum+=b;
		}
	}
 	printf("%d %d",cdd,sum);
}
