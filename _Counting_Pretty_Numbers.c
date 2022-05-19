#include<stdio.h>
int main()
{
    int n,i,l,r,c,d,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
            d=j%10;
            if(d==2||d==3||d==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}