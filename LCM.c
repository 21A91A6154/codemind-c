#include <stdio.h>

int main()
{
   int x, y, i, gcd,lcm;
   scanf("%d %d", &x, &y);

   for (i = 1; i <= x && i <= y; i++)\n   {
      if (x % i == 0 && y % i == 0)
         gcd = i;
   }
   lcm=(x*y)/gcd;

   printf("%d",lcm);

   return 0;
}