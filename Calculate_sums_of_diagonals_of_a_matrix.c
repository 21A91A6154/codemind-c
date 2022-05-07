#include<stdio.h>
int main()
{
    int n,i,j,sum=0,sum1=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
            if(i==n-j-1)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",sum);
    printf("Secondary Diagonal:%d
",sum1);
    return 0;
}