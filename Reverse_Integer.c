#include<stdio.h>
int main()
{
    int n,r,sum=0,i;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;//4 3 2 
        n=n/10;//123 12 1
        sum=sum*10+r;//4 43 432 4321 
    }
    printf("%d",sum);
    return 0;
}