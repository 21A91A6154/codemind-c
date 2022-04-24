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
    for(i=0;i<n;i++)
    {
        if(n%2==0)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
    if(n%2==1)
    {
        printf("%d",0);
    }
    
    return 0;
}