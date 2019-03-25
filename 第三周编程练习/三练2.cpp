#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	
	int n=0;
	scanf("%d",&n);
	
	for (int i=1;i<=n;i+=2){
		printf("%d",i);
		if (i<n-1) printf(" ");
	}
	
	
	return 0;
}
