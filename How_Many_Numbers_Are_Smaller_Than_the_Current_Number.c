#include<stdio.h>
int main()
{
    int n,i,min=0,c=0,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        min=arr[i];
        for(j=0;j<n;j++)
        {
            if(min>arr[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
    return 0;
}