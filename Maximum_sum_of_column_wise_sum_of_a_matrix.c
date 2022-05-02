#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,sum1=0;
    scanf("%d%d",&n,&m);
    int arr[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>sum1)
        {
            sum1=sum;
        }
    }
    printf("%d",sum1);
    return 0;
}