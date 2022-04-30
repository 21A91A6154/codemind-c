#include<stdio.h>
int main()
{
    int n,i,d=0,c=0,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
        if(temp==0)
        {
            c++;
        }
        printf("%d ",c);
    }
    return 0;
}