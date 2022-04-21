#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
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
        sum=sum1-sum2;
    }
    else
    {
        sum=sum2-sum1;
    }
    printf("%d",sum);
    return 0;
}