#include<stdio.h>
int main()
{
    int a,b,i,temp,d,sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
	if(a<b)
	{
    for(i=a;i<=b;i++)
    {
        temp=i;
        sum=0;
        while(temp)
        {
            d=temp%10;
            temp=temp/10;
            sum=sum*10+d;
        }
        if(i==sum)
        {
            printf("%d ",i);
    }
    }
}
    return 0;
}
