#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
	
	int space=0;
	int out=0;
	char c;
	int cnt=0;
	
	do{
		scanf("%c",&c);
		if (c!=' '&&c!='.'){
			cnt++;
			out=0;
		}else if(c==' '||c=='.'){
			//Êä³ö 
			if (out==0){
				if (space==1) printf(" ");
				printf("%d",cnt);
				cnt=0;
				out=1;
				space=1; 
			}
			//ÍË³öÑ­»· 
			if (c=='.'){
				break;
			}
		}
	}while(1);
	
	
	return 0;
}

