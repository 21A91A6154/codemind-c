#include<stdio.h>
int main()
{
    int n,k=1,sum=0,d,res=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        k=k*d;
        sum=sum+d;
    }
    if(k==sum)
    {
    printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}