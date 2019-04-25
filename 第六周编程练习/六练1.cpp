#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
	
	int a=0,b=0;
	scanf("%d/%d",&a,&b);
	printf("0.");
	a*=10;
	
	for (int i=0;i<200;i++){
		printf("%d",a/b);
		a=a%b;
		a*=10;
		if (a==0) break;
	}
	
	return 0;
}

