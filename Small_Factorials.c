//small factorial
#include<stdio.h>
int main()
{
	int n,i,j,factorial=1;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		factorial=1;
		for(j=arr[i];j>=1;j--)
		{
		  factorial=factorial*j;	
		}
		printf("%d
",factorial);
	}
	return 0;
}