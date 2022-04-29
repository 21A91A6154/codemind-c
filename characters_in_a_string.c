#include<stdio.h>
int main()
{
    char str[100];
    int c=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
            c++;
    }
    printf("%d",c);
    
}