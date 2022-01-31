#include<stdio.h>
int main()
{
    int l,b,w,c,area,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=2*w*(l+b+2*w);
    cost=area*c;
    printf("%d",cost);
    return 0;
}