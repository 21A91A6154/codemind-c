#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
       if(arr[i]>=a && arr[i]<=b)
       {
           continue;
       }
       else
       {
           sum=sum+arr[i];
       }
    }
    printf("%d",sum);
    return 0;
}