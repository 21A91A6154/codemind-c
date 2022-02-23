#include <stdio.h>
int main()
{
    int n, s, i,j;
    scanf("%d",&n);
    int arr[n],a[n],t[n];
    for (i=0;i<n;i++)
    {
        a[i] = 0;
    }
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        t[i]=arr[i];
    }
    for (i=0;i<n;i++)
    {
        while(arr[i]!=0)
        {
            j=arr[i]%10;
            arr[i]/=10;
            a[i]=j+a[i]*10;
        }
    }
    for (i=0;i<n;i++)
    {
        if(a[i]==t[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}