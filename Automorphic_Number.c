#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq=0,d=0,c=0,temp=0,s=0,l=0,p=0;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    while(sq)
    {
        p=pow(10,c);
        l=sq%p;
        sq=sq/10;
        if(l==temp)
        {
            printf("Automorphic Number");
            s++;
            break;
        }
    }
    if(s==0)
    {
        printf("Not an Automorphic Number");
    }
    return 0;
}