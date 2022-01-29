#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count+=i;
    }
    printf("%d",count);
    return 0;
}