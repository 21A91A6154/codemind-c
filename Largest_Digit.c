#include<stdio.h>
int main()
{
    int n,d=0,x=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d>0)
        {
            if(d>x)
            {
                x=d;
            }
        }
    }
    printf("%d",x);
    return 0;
}