#include <stdio.h>
#include <string.h>

int main ()
{
	
	int m=0;
	int n=0;
	scanf("%d %d",&n,&m);
	
	
	//ËØÊıÅĞ¶¨
	int count=0;
	int a=2;
	int isprime=1;
	int sum=0;
	
	while(count<200){
		isprime=1;
		for (int i=2;i<a;i++){
			if (a%i==0){
				isprime=0;
				break;
			}
		}
		if (isprime){
			count++;
			if (count>=n&&count<=m){
				sum+=a;
			}	
		}
		
		a++;
	} 
	printf("%d",sum);
	
	
	return 0;
} 



