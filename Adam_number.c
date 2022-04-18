#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,d,sum=0,x,add=0,temp=0,f;
    scanf("%d",&n);//12
    temp=n;
    while(n)
    {
      d=n%10;
      n=n/10;
      sum=sum*10+d;//21
    }
    k=temp*temp;//144
    x=sum*sum;//441
    while(x)
    {
        f=x%10;
        x=x/10;
        add=add*10+f;//144
    }
    if(k==add)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}