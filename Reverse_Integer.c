#include<stdio.h>
int main()
{
    int n,r,rev=0;
    scanf("%d",&n);
    while(n>0||n<0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}