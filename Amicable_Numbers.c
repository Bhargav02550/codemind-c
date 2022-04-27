#include<stdio.h>
int main()
{
    int a,b,i,s=0,s1=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s+=i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            s1+=i;
        }
    }
    if(s==b&&s1==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}