#include<stdio.h>
int main()
{
    int  n,c=0,rev=0,d=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           c++; 
        }
    }
    if(c==2)
    {
        rev=0;
        while(n)
        {
           d=n%10;
           n=n/10;
           rev=(rev*10)+d;
        }
        c=0;
        for(i=1;i<=rev;i++)
        {
            if(rev%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
           printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
    return 0;
}