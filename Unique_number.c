#include<stdio.h>
int main()
{
    int n,d,a=0,b=0,c=0,k=0,e=0,f=0,g=0,h=0,i=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d==1)
        {
            a++;
        }
        else if(d==2)
        {
            b++;
        }
        else if(d==3)
        {
            c++;
        }
        else if(d==4)
        {
           k++; 
        }
        else if(d==5)
        {
            e++;
        }
        else if(d==6)
        {
            f++;
        }
        else if(d==7)
        {
            g++;
        }
        else if(d==8)
        {
            h++;
        }
        else if(d==9)
        {
            i++;
        }
    }
    if(a>1||b>1||c>1||k>1||e>1||f>1||g>1||h>1||i>1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
    return 0;
}