#include<stdio.h>
int main()
{
    int m,n,x=0,i,j,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        x=0;
        for(j=i;j<=n;j++)
        {
            x+=j;
            if(x%2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}