#include<stdio.h>
int main()
{
    int n,i,k=1,m=1,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(k<=1)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==m)
            {
                c+=1;
            }
        }
        if(c==0)
        {
            printf("%d",m);
            k+=1;
        }
        m+=1;
    }
    return 0;
}