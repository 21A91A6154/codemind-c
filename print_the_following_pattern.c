#include<stdio.h>
int main()
{
    char c;
    int n,i,j,k=1;
    scanf("%d",&n);
   for(c=65;k<=n;c++)
	{
		k++;
			for(j=0;j<n;j++)
			{
				printf("%c ",c);
			}
		printf("
");
	}
    return 0;
}