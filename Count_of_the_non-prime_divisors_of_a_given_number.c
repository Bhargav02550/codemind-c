#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int np(int n)
{
    int i,d,c=0,j=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(p(i))
            {
                c++;
            }
            else
            {
                j++;
            }
        }
    }
    return j+1;
}
int main()
{
    int n;
    scanf("%d",&n );
    printf("%d",np(n));
}
