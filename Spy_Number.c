#include<stdio.h>
int main()
{
    int n,p=1,s=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        p*=r;
        s+=r;
    }
    if(p==s)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    
    return 0;
}