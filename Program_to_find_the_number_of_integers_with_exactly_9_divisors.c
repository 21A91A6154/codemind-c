#include<stdio.h>
int main()
{
    int n,i,j,c=0,x=0;
    scanf("%d",&n);
    for(i=35;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            x++;
            printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d
",x);
    return 0;
}