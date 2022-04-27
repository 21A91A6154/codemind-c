#include<stdio.h>
#include<strings.h>
int main()
{
    char s[100];
    int i,x=0,y=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(y==2*x)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}