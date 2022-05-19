#include<stdio.h>
int main()
{
    int n,i,a,z,x=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            x++;
            printf("%d ",i);
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==a)
        {
            c++;
            printf("%d ",i);
            break;
        }
    }
    if(x==0)
    {
        printf("%d ",-1);
    }
    if(c==0)
    {
        printf("%d ",-1);
    }
    return 0;
}