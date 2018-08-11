#include<stdio.h>
int main()
{
  int num,arr[num],i,k=0,count,total=0;
  char temp;
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    scanf("%d%c",&arr[i],&temp);
  }
  for(i=0;i<num;i=i+2)
  {
                count=1;
      			 if(arr[i]==arr[i+1])
                 {
                   count++;
                   if(count==2)
                   {
                     k++;
                   }
                 }
 }
  k=k-1;
  while(k>=1)
  {
   total=total+k;
    k=k-1;
  }
  printf("%d",total);
  return(0);
  }
