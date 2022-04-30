#include<stdio.h>
int main()
{
    int n,i,pro=1,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        pro=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                pro=pro*arr[j];
            }
        }
        printf("%d ",pro);
    }
    return 0;
}