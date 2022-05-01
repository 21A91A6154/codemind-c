#include<stdio.h>
int main()
{
    int n,m,i,j,c=0,k=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if(a[i]!=b[j])
            {
                c++;
            }
        }
        if(c==m)
        {
            printf("%d ",a[i]);
        }
    }
    for(j=0;j<m;j++)
    {
        k=0;
        for(i=0;i<n;i++)
        {
           if(b[j]!=a[i])
           {
               k++;
           }
        }
        if(k==n)
        {
            printf("%d ",b[j]);
        }
    }
    return 0;
}