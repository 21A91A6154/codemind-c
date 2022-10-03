#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    int arr[n];
    if(n>=1 && n<=10000)
    {
    for(i=1;i<=n;i++)
    {
        arr[k]=i;
        k+=1;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
    return 0;
}