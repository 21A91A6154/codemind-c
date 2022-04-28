#include<stdio.h>
int main()
{
    int n,i,c=0,temp=0,sum=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            sum=sum+d;
        }
    }
    printf("%d",sum);
    return 0;
}