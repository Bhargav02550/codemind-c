#include<stdio.h>
int reverse(int a)
{
    int r,rev=0;
    while(a)
    {
     r=a%10;
     rev=rev*10+r;
     a=a/10;
    }
    return rev;
}
int main()
{
    int n,b,i;
    scanf("%d%d",&n,&b);
    for(i=n;i<=b;i++)
    {
        if(reverse(i)==i)
        {
            printf("%d ",i);
        }
    }
}