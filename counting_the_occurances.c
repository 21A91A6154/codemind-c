#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],c;
    int i,x=0;
    scanf(" %[^
]s",str);
    scanf(" %c",&c);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==c)
        {
            x++;
        }
    }
    if(x>0)
    {
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
    return 0;
}