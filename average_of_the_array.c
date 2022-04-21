#include<stdio.h>
int main()
{
    int n,i,sum=0,c=0;
    float avg=0;
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
    avg=(float)sum/n;
    printf("%.2f",avg);
    return 0;
}