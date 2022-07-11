#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,k=0,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    if(sum1>sum2)
    {
        printf("%d",sum1-sum2);
    }
    else
    {
        printf("%d",sum2-sum1);
    }
    return 0;
}