#include<stdio.h>
int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",i);
		}
		printf("
");
	}
	return 0;
}