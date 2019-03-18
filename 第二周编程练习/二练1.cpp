#include <stdio.h>


int main ()
{
	
	int a=0;
	scanf("%d",&a);
	
	int b=0;
	b=100*(a%10);
	a/=10;
	b+=10*(a%10);
	a/=10;
	b+=a;
	printf("%d",b); 
	
	
	
	
	return 0;
	}


