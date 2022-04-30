#include<stdio.h>
int main()
{
    int n,i,x=0,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   /* for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            x=i;
        }
        else
        {
            continue;
        }
        break;
    }*/
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
          sum=sum+arr[i];
        }
        else if(arr[i]%2==0)
        {
            c++;
        }
        if(c==1)
        {
            break;
        }
        else
        {
            continue;
        }
        break;
    }
    printf("%d",sum);
    return  0;
}