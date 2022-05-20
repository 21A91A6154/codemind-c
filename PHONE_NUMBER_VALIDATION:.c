#include<stdio.h>
int main()
{
    long int n,c=0,d;
    scanf("%ld",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}