#include<stdio.h>
int main()
{
    int n,i,sum=0,c=0,avg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}