#include<stdio.h>
int main()
{
    int k,i,n,j,sum=0,s=0,m=0,arr[50];
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        s=0;
        scanf("%d",&n);
        for(j=0;j<n-1;j++)
        {
            scanf("%d",&arr[j]);
            s=s+arr[j];
        }
        sum=(n*(n+1))/2;
        m=sum-s;
        printf("%d",m);
        printf("
");
    }
    return 0;
}