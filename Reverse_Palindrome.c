#include<stdio.h>
int rev(int n)
{
    int r=0;
    while(n)
    {
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}
int palin(int n)
{
    int t;
    t=n;
    if(t==rev(n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=rev(n);
        n=n+r;
        if(palin(n))
        {
            printf("%d",n);
            break;
        }
    }
}