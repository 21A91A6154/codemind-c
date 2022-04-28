#include<stdio.h>
int main()
{
    int a,b,c,cap=0,total=0;
    scanf("%d%d%d",&a,&b,&c);
    cap=2*a*b*c*512;
    total=cap/1024;
    printf("%dKB",total);
}