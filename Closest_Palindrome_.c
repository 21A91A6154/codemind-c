#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,rev=0,s=0,q=0,k,d;
    scanf("%d",&n);
    for(i=n+1;i<2*n;i++)
    {
        k=i;
        rev=0;
        while(k!=0)
        {
            d=k%10;
            k=k/10;
            rev=rev*10+d;
        }
        if(i==rev)
        {
            s=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        k=i;
        rev=0;
        while(k!=0)
        {
            d=k%10;
            k=k/10;
            rev=rev*10+d;
        }
        if(i==rev)
        {
            q=i;
            break;
        }
    }
    if(s-n<n-q)
    {
        printf("%d",s);
    }
    else if(n-q<s-n)
    {
        printf("%d",q);
    }
    else
    {
        printf("%d %d",q,s);
    }
    return 0;
}