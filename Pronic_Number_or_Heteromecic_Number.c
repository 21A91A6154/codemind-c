#include<stdio.h>
int main()
{
    int n,k=0,c=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
        {
            if(i*j==n)
            {
                if(i-j==1)
                {
                    c++;
                    k=1;
                }
            }
        }
        if(c==1)
        {
            break;
            
        }
        else{
            continue;
        }
        break;
    }
    if(k==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}