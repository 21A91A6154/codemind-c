#include<stdio.h>
int main()
{
    int n,i,k=3,a=1,b=1,c=0;
    scanf("%d",&n);
    printf("%d %d %d ",0,1,1);
    while(k<n)
    {
        c=a+b;
        printf("%d ",c);
        k+=1;
        a=b;
        b=c;
    }
    return 0;
}