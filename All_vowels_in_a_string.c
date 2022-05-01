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
    if(s>0 && t>0 && l>0 && v>0 && w>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}