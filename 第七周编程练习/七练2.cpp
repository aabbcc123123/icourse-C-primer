#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
	
	int n=0;
	scanf("%d",&n);
	int a[n][n];
	int check=1;
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int andian=0,row=0,col=0;
	for (int i=0;i<n;i++){
		check=1;
		//找行最大 
		for (int j=0;j<n;j++){
			if (j==0) andian=a[i][j];
			if (a[i][j]>andian){
				andian=a[i][j];
				col=j;
				row=i;
			}
		}
		//找列最小
		
		for (int j=0;j<n;j++){
			if (a[j][col]<andian){
				check=0;
				break;
			}
		} 
		if (check==1) break;
	}
	
	if (check==1) printf("%d %d",row,col);
	else if (check==0) printf("NONE");
	
	return 0;
}

