#include<stdio.h>
int main()
{
    int max,min,i,result,c,a[1000];
    
    scanf("%d",&c);
    for(i=0;i<=c;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<=c;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    result=max-min;
    printf("%d",result);
    return 0;
}
