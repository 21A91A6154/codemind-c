#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,sum1=0,sum2=0,sum3=0;
    scanf("%d%d",&n,&m);
    int arr[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>sum1)
        {
            sum1=sum;
        }
    }
    for(j=0;j<m;j++)
    {
        sum3=0;
        for(i=0;i<n;i++)
        {
            sum3=sum3+arr[i][j];
        }
        if(sum3>sum2)
        {
            sum2=sum3;
        }
    }
    if(sum1>sum2)
    {
        printf("%d",sum1);
    }
    else
    {
        printf("%d",sum2);
    }
    return 0;
}