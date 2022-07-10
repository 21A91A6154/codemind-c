#include<stdio.h>
int main()
{
    int n,i,k;
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
            k=i;
            if(i<n/2)
            {
            printf("%d %d ",arr[i],arr[(n-1)-k]);
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            k=i;
            if(n/2!=k)
            {
                if(i<=n/2)
                {
                printf("%d %d ",arr[i],arr[(n-1)-k]);
                }
            }
            else
            {
                if(i<=n/2)
                {
                printf("%d %d ",arr[i],0);
                }
            }
        }
    }
    return 0;
}