#include<stdio.h>
int main()
{
    int a,b,i,temp=0,c=0,d=0;
    scanf("%d
",&a);
    scanf("%d
",&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
        {
            d=temp%10;
            if(d==0 || i%d!=0)
            {
                break;
            }
            temp=temp/10;
        }
        if(temp==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}