#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,count=0,c=0;
    scanf("%d%d",&n,&m);
    if(n==1)
    n=2;
    for(i=n;i<=m;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
               count++;
            }
        }
        if(count==0)
        {
            printf("%d
",i);
        }
    }
    return 0;
}