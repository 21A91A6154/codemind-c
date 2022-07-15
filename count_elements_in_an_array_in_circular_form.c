#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if((arr[i-1]%2==1 && arr[i+1]%2==0) || (arr[i-1]%2==0 && arr[i+1]%2==1))
        {
            c++;
        }
    }
    if((arr[1]%2==1 && arr[n-1]%2==0) || (arr[1]%2==0 && arr[n-1]%2==1))
    {
        c++;
    }
    if((arr[0]%2==1 && arr[n-2]%2==0) || (arr[0]%2==0 && arr[n-2]%2==1))
    {
        c++;
    }
    printf("%d",c);
    return 0;
}