#include<stdio.h>
int main()
{
    int n,i,sum=0,d=0;
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        d=i%10;
        sum+=d;
        i=i/10;
    }
 
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}