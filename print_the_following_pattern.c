#include<stdio.h>
int main()
{
   int i,j,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-2;j++)
       {
           printf("%d",j);
       }
       for(j=1;j<=n-3;j++)
       {
           printf("%d",j);
       }
       printf("
");
   }
   return 0;
}
