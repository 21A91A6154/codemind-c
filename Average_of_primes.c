#include<stdio.h>
int main()
{
    int n,i,k,x=0,c=0,j,sum=0;
    float avg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
               if(arr[i]%j==0)
               {
                   c++;
               }
        }
        if(c==2)
        {
            if(arr[i]!=1)
            {
               x++;
               sum=sum+arr[i];
            }
        }
    }
    avg=(float)sum/x;
    printf("%.2f",avg);
    return 0;
}