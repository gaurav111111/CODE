#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
void main() {
int arr1[10],arr2[10],arr3[20],k=0,carry=0,i,j;
printf("Enter the first integer");
for(i=0;i<3;i++)
{
scanf("%d",&arr1[i]);	
}
printf("Enter the second integer");
for(j=0;j<3;j++)
{
scanf("%d",&arr2[j]);	
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	arr3[i+j] += arr1[i]*arr2[j];
			}
}

for(k=0;k<=10;k++)
{
printf("%d",arr3[k]);
}

}
