#include<stdio.h>
int main()
{
    int n,m,a[100],i,j,k,c=0;
    scanf("%d",&n);
    while(n--)
    {
        c=0;
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<m;i++)
        {
            for(j=i+1;j<m;j++)
            {
                for(k=0;k<m;k++)
                {
                    if(a[i]+a[j]==a[k] && k!=j)
                    {
                        c++;
                    }
                }
            }
        }
        if(c==0)
        {
            printf("-1
");
        }
        else
        {
            printf("%d
",c);
        }
    }
}