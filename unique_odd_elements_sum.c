#include<stdio.h>
int main()
{
    int n,i,j,c=0,sum=0;
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
                if(arr[i]%2==1)
                {
                c++;
                if(c==1)
                {
                   sum=sum+arr[i];
                }
                if(j>i)
                {
                   arr[j]=0;
                }
                }
            }
        }
    }
    printf("%d",sum);
    return 0;
}