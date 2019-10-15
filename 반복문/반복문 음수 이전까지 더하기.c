	#include <stdio.h>
	 
	int main()
	{
	  int a=0,sum=0;
    do     
    {
     scanf("%d",&a);
	 sum= sum+a;
	}while(a>=0);
	sum =sum-a;
	printf("%d",sum);
}

