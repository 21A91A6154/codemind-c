#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,k,mod=0;
    scanf("%d%d%d",&x,&y,&m);
    k=pow(x,y);
    mod=k%m;
    printf("%d",mod);
    return 0;
}