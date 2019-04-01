#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main()
{
	
	int a=0;
	
	int ji=0,ou=0;
	
	do {
		scanf("%d",&a);
		if (a>0){
			if (a%2==0) ou++;
			if (a%2==1) ji++;
		}else break;
		
	}while(1);
	
	printf("%d %d",ji,ou);
	
	
	
	return 0;
}


