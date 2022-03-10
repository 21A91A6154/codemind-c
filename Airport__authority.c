#include<stdio.h>
int main()
{
    int n,i,t,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            sum=sum+1;
        }
        else
        {
            sum=sum+2;
        }
    }
    printf("%d",sum);
    return 0;
}
