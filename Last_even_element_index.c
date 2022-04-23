#include<stdio.h>
int main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]%2==0)
        {
          printf("%d",i);
        }
        else
        {
            continue;
        }
        break;
    }
    return 0;
    
    
}