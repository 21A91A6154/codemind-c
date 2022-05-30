#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        l=i;
        for(j=1;j<=k;j++)
        {
           printf("%d ",l); 
           l++;
        }
        k--;
        printf("
");
    }
    return 0;
}