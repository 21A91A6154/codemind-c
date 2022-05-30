#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    k=65+n-1;
    l=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=l;j++)
        {
            printf("%c ",k);
        }
        l--;
        k--;
        printf("
");
    }
}