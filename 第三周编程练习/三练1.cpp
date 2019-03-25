#include<stdio.h>
#include <string.h>
#include <stdlib.h> 



int main()
{
    
   int n=0;
   scanf("%d",&n);
   
   int hour=n/100;
   int min=n%100;
   
   if (hour>=8) hour-=8;
   else if (hour<8) hour+=16;
   
   if (hour==0){
   		printf("%d",min);
   } else {
   	printf("%d%02d",hour,min);
   }
    
    return 0;
}

