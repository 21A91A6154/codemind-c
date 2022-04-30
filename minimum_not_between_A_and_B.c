#include<stdio.h>
int main()
{
    int n,i,a,b,min=10,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            x++;
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
    }
    if(x==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
    return 0;
}