#include<stdio.h>
int main()
{
    int n,i,c=0,j,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(arr[j]%2==0)
            {
            if(arr[i]==arr[j])
            {
                c++;
            }
            }
        }
        if(c==1)
        {
            x++;
        }
    }
         printf("%d",x);
    return 0;
}