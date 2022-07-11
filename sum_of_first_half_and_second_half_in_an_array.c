#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,k=0,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    printf("%d
",sum1);
    printf("%d",sum2);
    return 0;
}