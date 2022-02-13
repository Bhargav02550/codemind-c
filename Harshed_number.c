#include<stdio.h>
int main()
{
    int a,sum=0,r=0,m;
    scanf("%d",&a);
    m=a;
    while(a>0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    if(m%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}