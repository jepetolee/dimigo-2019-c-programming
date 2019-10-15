#include <stdio.h>
 
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    while (a){
    	c=a;
    	a=b%a;
    	b=c;
	}
	printf("%d",b);
	
} 
