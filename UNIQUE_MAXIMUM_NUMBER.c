#include<stdio.h>
int main()
{
    int n,i,c=0,max=0,j,x=0;
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
        if(c==1)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
            x++;
        }
    }
    if(x>0)
    {
       printf("%d",max);
    }
    else if(x==0)
    {
        printf("-1");
    }
    return 0;
}