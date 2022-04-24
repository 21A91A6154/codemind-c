#include<stdio.h>
int main()
{
    int n,i,k,x=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            x=i;
        }
    }
    for(i=0;i<=x;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return  0;
}