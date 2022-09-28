#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],sum=0,sum1=0,c=0,c1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            c++;
        }
        else
        {
            sum+=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]==-1)
        {
            c++;
        }
        else
        {
            sum1+=b[i];
        }
    }
    if(c==2)
    {
        printf("Infinite");
    }
    else
    {
        for(int i=0;i<10000;i++)
        {
            if(i+sum==sum1)
            {
                c1++;
            }
        }
        printf("%d",c1);
    }
}