#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int I,C=0;
    scanf("%[^
]s",str);
    for(I=0;str[I]!=NULL;I++)
    {
        if(str[I]=='a'||str[I]=='b'||str[I]=='c'||str[I]=='d'||str[I]=='e'||str[I]=='f'||str[I]=='g'||str[I]=='h'||str[I]=='i'||str[I]=='j'||str[I]=='k')
        {
            C++;
        }
        if(str[I]=='l'||str[I]=='m'||str[I]=='n'||str[I]=='o'||str[I]=='p'||str[I]=='q'||str[I]=='r'||str[I]=='s'||str[I]=='t'||str[I]=='u'||str[I]=='v'||str[I]=='w'||str[I]=='x'||str[I]=='y'||str[I]=='z')
        {
            C++;
        }
    }
    printf("%d",C);
    return 0;
}