
#include<stdio.h>
int main()
{
    int n,arr[50],i=0,a=1,b=2,c=0,min=999,sem=999,z=0,x=0,y=0;
    scanf("%d",&n);
    arr[0]=a;
    arr[1]=b;
    i=2;
    while(c<n*n)
    {
        c=a+b;
        a=b;
        b=c;
        arr[i]=c;
        i++;
    }
    z=i;
    for(i=0;i<z;i++)
    {
        if(arr[i]<=n)
        {
            if(n-arr[i]<min)
            {
                min=n-arr[i];
                x=arr[i];
            }
        }
        else
        {
            if(arr[i]-n<sem)
            {
                sem=arr[i]-n;
                y=arr[i];
            }
        }
    }
    if(min<sem)
    {
        printf("%d",x);
    }
    else if(sem<min)
    {
        printf("%d",y);
    }
    else
    {
        printf("%d %d",x,y);
    }
    return 0;
}