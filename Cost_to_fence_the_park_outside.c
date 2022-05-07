#include<stdio.h>
int main()
{
    int n,l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    n=(l+2*w)*(b+2*w)-l*b;
    printf("%d",n*c);
}