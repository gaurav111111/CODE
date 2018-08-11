#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[10],i,brr[10],j=0,count=0;
	for(i=0;i<=6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=6;i++)
	{
		if((arr[i]%2)==0)
		{
			count++;
			printf("%d",arr[i]);	
		}
		
	}
	if(count==0){
	
/*	for(j=1;j<=count;j++)
	{
		printf("number is - %d",brr[j]);
	}
}
	else{*/
			printf("no even no found %d",0);
		}
	return 0;
}
