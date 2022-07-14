
#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0,q=0,t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        for(i=n+1;i<2*n;i++)
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
                s=i;
                break;
           }
       }
       for(i=n;i>=2;i--)
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
                q=i;
                break;
           }
       }
       if(n-q<s-n)
       {
           printf("%d",q);
       }
       else if(s-n<n-q)
       {
           printf("%d",s);
       }
       else
       {
           printf("%d",q);
       }
       printf("
");
    }
    return 0;
}