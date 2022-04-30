#include<stdio.h>
#include<strings.h>
int main()
{
    char str[100];
    int i,j,c=0,x=0,z;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            z=i;
            x++;
        }
        if(x==1)
        {
            break;
        }
        else
        {
            continue;
        }
        break;
    }
    if(x==0)
    {
        printf("-1");
    }
    else
    {
        printf("%c",str[z]);
    }
    return 0;
}