#include <stdio.h>
 
int main(){
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    d=a,e=b;
    while (a){
    	c=a;
    	a=b%a;
    	b=c;
	}
	d=d/b;
	e=e/b;
	printf("%d",b*e*d);
	
} 
