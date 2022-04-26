#include<stdio.h>
int main()
{
    int n,i,sum=0,sum1=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum=sum+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum1=sum1+arr[i];
    }
    if(sum1>sum)
    {
        d=sum1-sum;
    }
    else
    {
        d=sum-sum1;
    }
    printf("%d",d);
    return 0;
}