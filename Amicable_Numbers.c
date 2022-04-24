#include<stdio.h>
int main()
{
    int a,b,k=0,l=0,sum=0,sum1=0,i,j;
    scanf("%d%d",&a,&b);
    l=a;
    k=b;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    for(j=1;j<=b/2;j++)
    {
        if(b%j==0)
        {
           sum1=sum1+j; 
        }
    }
    if(a==sum1 && b==sum)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return  0;
}