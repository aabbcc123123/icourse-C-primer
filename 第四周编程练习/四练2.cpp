#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main()
{
	
	int x=0;
	scanf("%d",&x);
	int a=0;
	int result=0;
	
	for (int i=0;;i++){
		int mi=1;
		a=x%10;
		x/=10;
		if (a%2==(i+1)%2){
			for (int j=0;j<i;j++) mi*=2;
			result+=mi;
		}
		if (x==0) break;
		
	}
	
	printf("%d",result);
	
	
	
	return 0;
}


