#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        sum=sum+(pow(2,k)*arr[i]);
        k++;
    }
    printf("%d",sum);
    return 0;
}