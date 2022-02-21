#include <stdio.h>
#include <math.h>
 
int main()
{
    int num;
    int i;
    float f;
    scanf("%d",&num);
    f=sqrt((double)num);
    i=f;
    if(i==f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
      
    return 0;
}