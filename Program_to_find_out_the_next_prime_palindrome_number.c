#include<stdio.h>
int main()
{
    int n,i,k,c=0,x=0,z=0,d=0,res=0;
    scanf("%d",&n);
    k=n+1;
    while(c<=1)
    {
        x=0;
        for(i=1;i<=k;i++)
        {
            if(k%i==0)
            {
                x+=1;
            }
        }
        if(x==2)
        {
           res=0;
           z=0;
           z=k;
           d=0;
           while(z!=0)
           {
               d=z%10;
               z=z/10;
               res=res*10+d;
           }
           if(res==k)
           {
               c+=1;
               break;
           }
        }
        k+=1;
    }
    printf("%d",k);
    return 0;
}