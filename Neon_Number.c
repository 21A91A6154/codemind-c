#include<stdio.h>
int main()
{
    int n,mul=0,d,sum=0;
    scanf("%d",&n);
    mul=n*n;
    while(mul)
    {
       d=mul%10;
       mul=mul/10;
       sum=sum+d;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}