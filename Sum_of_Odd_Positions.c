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
        if(i%2==1)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}