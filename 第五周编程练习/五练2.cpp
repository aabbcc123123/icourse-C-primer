#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void shuchu(int a);

int main()
{
	int n=0;
	scanf("%d",&n);
	
	if (n<0) printf("fu "),n*=-1;
	int a=0;
	int num=0;//共有多少位
	 
	for (int i=0;i<20;i++){
		a=a*10+n%10;
		n/=10;
		if (n==0){
			num=i+1;
			break;
		}
	}
	n=a;
	
	for (int i=0;i<num;i++){
		shuchu((n%10));
		n/=10;
		if (i<num-1) printf(" ");
	}
	
	return 0;
}

void shuchu(int a)
{
	switch (a){
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		
	}
}
