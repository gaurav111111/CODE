#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,j=0;
	for(i=0;i<9;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	i=j+1;
	while(i<=9 || j<=9)
	{
	
		if(arr[j]>arr[i])
		{
				if(i==9)
				{
					printf("%d",arr[j]);
							}			
			i++;
		}
		else
		{
	
			j++;
			i=j+1;
		}
	}
	

	return 0;
}
