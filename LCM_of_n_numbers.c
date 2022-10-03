#include<stdio.h>
int main()
{
    int n,i,k=1,x=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(c<=1)
    {
        x=0;
        for(i=0;i<n;i++)
        {
            if(k%arr[i]!=0)
            {
                x+=1;
            }
        }
        if(x==0)
        {
            c+=1;
        }
        k+=1;
    }
    printf("%d",(k-1)/2);
    return 0;
}