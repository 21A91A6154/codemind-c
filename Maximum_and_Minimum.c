#include<stdio.h>
int main()
{
    int n,i,c=0,j,min=10,max=0,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            x++;
            if(arr[i]>max)
            {
                max=arr[i];
            }
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
         printf("%d %d",min,max);
    }
    return 0;
}