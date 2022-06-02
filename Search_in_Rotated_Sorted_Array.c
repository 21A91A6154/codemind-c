#include<stdio.h>
int main()
{
    int n,a,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            printf("%d",i);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    return 0;
}