#include<stdio.h>
int main()
{
	int i,j,c=0,x=0,y=0,a[4],b[4];
	for(i=1;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=3;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			
			if(i==j)
			{
				if(a[i]>b[j])
				{
					c++;
				}
				else if(a[i]<b[j])
				{
					x++;
				}
			}
		}
	}
	printf("%d %d",c,x);
	return 0;
	
}