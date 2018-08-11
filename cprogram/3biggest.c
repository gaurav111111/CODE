#include<stdio.h>
#include<conio.h>
/*void main(int argc,int *a[])
{
	int i,j,arr[],large,larger,largest,k=1;
	for(i=0;i<=7;i++)
	{
		arr[i]=atoi(a[k]);
		k++;
	}
	for(i=0;i<=7;i++)
	{
		printf("%d",arr[i]);
	}
	
getch();
}*/
int main()
{
	int i,arr[7],large,larger,largest,size;
	printf("enter the input size");
	scanf("%d",&size);
	printf("enter the array element");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=0;i<=size;i++)
	{
		if(	arr[i]>large)
			{
				large=arr[i];
			}
		
		}	
		printf("1 biggest is %d\n",large);
		
		larger=arr[0];
	for(i=0;i<=size;i++)
	{
		if(	larger<arr[i] && arr[i]!=large)
			{
				larger=arr[i];
			}
		
		}
		printf("2 biggest is %d\n",larger);
		largest=arr[0];
	for(i=0;i<=size;i++)
	{
		if(	(largest<arr[i])&&(arr[i]!=larger&& arr[i]!=large))
			{
				largest=arr[i];
			}
		
		}
		printf("third biggest is %d",largest);
		
		
		return 0;		
}
