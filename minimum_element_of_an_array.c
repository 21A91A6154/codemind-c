#include<stdio.h>
int main()
{
    int n,i,min=0;
    float avg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}