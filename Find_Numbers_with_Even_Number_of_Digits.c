#include<stdio.h>
int main()
{
	int n,i,d,arr[100],c=0,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		while(arr[i]>0)
		{
			d=arr[i]%10;
			arr[i]=arr[i]/10;
			c++;
		}
		if(c==2||c==4||c==6)
		{
			x++;
		}
	}
	printf("%d",x);
	return 0;
}