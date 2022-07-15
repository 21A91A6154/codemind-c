#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            if(i<n/2)
            {
                printf("%d ",arr[i]);
                printf("%d ",arr[n-1-i]);
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(i<n/2)
            {
                printf("%d ",arr[i]);
                printf("%d ",arr[n-1-i]);
            }
        }
        printf("%d %d",arr[n/2],0);
    }
    return 0;
}