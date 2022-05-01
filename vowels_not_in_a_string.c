#include<stdio.h>
#include<strings.h>
int main()
{
    char str[100];
    int i,s=0,t=0,l=0,v=0,w=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a')
        {
            s++;
        }
        else if(str[i]=='e')
        {
            t++;
        }
        else if(str[i]=='i')
        {
            l++;
        }
        else if(str[i]=='o')
        {
            v++;
        }
        else if(str[i]=='u')
        {
            w++;
        }
    }
    if(s==0)
    {
        printf("a ");
    }
    if(t==0)
    {
        printf("e ");
    }
    if(l==0)
    {
        printf("i ");
    }
    if(v==0)
    {
        printf("o ");
    }
    if(w==0)
    {
        printf("u ");
    }
    else if (s>0 && t>0 && l>0 && v>0 && w>0)
    {
        printf("0");
    }
    return 0;
}