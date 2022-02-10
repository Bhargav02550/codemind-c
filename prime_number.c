#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        if(b%a==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}