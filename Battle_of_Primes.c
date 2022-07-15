#include<stdio.h>
int main()
{
    int n1,n2,i,j,k=0,c=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=(n1+n2)+1;;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k=i;
            break;
        }
    }
    printf("%d",k-(n1+n2));
    return 0;
}