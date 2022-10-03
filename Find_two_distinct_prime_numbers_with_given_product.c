#include<stdio.h>
int main()
{
        int n,i,j,c=0,v=0,z=0,s=0;
        scanf("%d",&n);
        int l[n],r[2*n];
        for(i=2;i<n+1;i++)
        {
            c=0;
            for(j=1;j<i+1;j++)
            {
                if(i%j==0)
                {
                    c+=1;
                }
            }
            if(c==2)
            {
               l[v]=i;
               v+=1;
            }
        }
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                if(l[i]!=l[j])
                {
                    if(l[i]*l[j]==n)
                    {
                       r[s]=l[i];
                       s+=1;
                       r[s]=l[j];
                       s+=1;
                    }
                }
            }
        }
        if(s==0)
        {
            printf("-1");
        }
        else
        {
            printf("%d %d",r[0],r[1]);
        }
        return 0;
}