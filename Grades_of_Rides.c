#include<stdio.h>
int main()
{
    int H,S,Sp;
    scanf("%d%d%d",&H,&S,&Sp);
    {
     if(H>50 && S>60 && Sp>100)
     {
         printf("10");
     }
     else if(H>50 && S>60)
     {
         printf("9");
     }
     else if(S>60 && Sp>100)
     {
         printf("8");
     }
     else if(H>50 && Sp>100)
     {
         printf("7");
     }
     else if(H>50 || S>60 || Sp>100)
     {
         printf("6");
     }
     else
     {
         printf("5");
     }
    }
    return 0;
    
}