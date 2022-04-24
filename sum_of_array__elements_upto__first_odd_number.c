#include<stdio.h>
int main()
{
    int n,i,x=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            x=i;
        }
        else
        {
            continue;
        }
        break;
    }
    for(i=0;i<x;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return  0;
}