#include<stdio.h>
int main()
{
    int n,i,j,c=0,x=0,a,b,d;
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
        if(c>1)
        {
            a=i;
        }
    }
    printf("%d",arr[a]);
    return 0;
}