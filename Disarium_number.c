#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,d,c=0,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    n=temp;
    while(temp)
    {
        d=temp%10;
        temp=temp/10;
        sum=sum+pow(d,c);
        c--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}