#include<stdio.h>
int main()
{
    int n,r=0,s=0,m;
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        r=m%10;
        s=s+r;
        m=m/10;
    }
    if(n%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}