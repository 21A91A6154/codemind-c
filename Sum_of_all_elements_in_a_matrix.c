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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                sum=sum+arr[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}