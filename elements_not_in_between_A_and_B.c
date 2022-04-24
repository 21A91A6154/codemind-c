#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
       if(arr[i]>=a && arr[i]<=b)
       {
           continue;
       }
       else
       {
           c++;
           printf("%d ",arr[i]);
       }
    }
    if(c==0)
    {
        printf("-1");
    }
    return 0;
}