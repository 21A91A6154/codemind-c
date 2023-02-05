#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("%d",i);
        }
        k=k+2;
        printf("
");
    }
    
}