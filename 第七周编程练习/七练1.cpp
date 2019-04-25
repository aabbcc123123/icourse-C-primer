#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
	
	int m[101]={0};
	int zero=0;
	int a=0,b=0;
	
	do {
		scanf("%d %d",&a,&b);
		if (a==0) zero++;
		m[a]+=b;
		if (zero==2) break;
	}while(1);
	
	//输出 
	int plussign=0;
	for (int i=100;i>1;i--){
		if (m[i]==1){
			if (plussign==1) printf("+");
			printf("x%d",i);
			plussign=1;
		}else if (m[i]>0){
			if (plussign==1) printf("+");
			printf("%dx%d",m[i],i);
			plussign=1;
		}else if (m[i]==-1){
			printf("-x%d",i);
		}else if (m[i]<0){
			printf("%dx%d",m[i],i);
			plussign=1;
		}
	}
	
	//一次时 
	if (m[1]>0){
		if (plussign==1) printf("+");
	}else if (m[1]<0){
		printf("-");
		m[1]*=-1;
	}
	if (m[1]!=1) printf("%d",m[1]);
	printf("x");
	
	//零次时 
	if (plussign==1) printf("+");
	if (m[0]>=0) printf("%d",m[0]);
	else if (m[0]<0) printf("%d",m[0]);
	
	return 0;
}

