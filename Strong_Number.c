#include<stdio.h>
int main(){
   int n,i;
   int res,rem;
   scanf("%d",&n);
   int sum = 0;
   int temp = n;
   while(n){
      i = 1,res = 1;
      rem = n % 10;
      while(i <= rem){
         res = res * i;
         i++;
      }
      sum = sum + res;
      n = n / 10;
   }
   if(sum == temp)
      printf("The number %d is a strong number",temp);
   else
      printf("The number %d is not a strong number",temp);
   return 0;
}