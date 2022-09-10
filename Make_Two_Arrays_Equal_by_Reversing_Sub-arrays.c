#include<stdio.h>
int main()
{
    int m,n,c,c1=0;
    scanf("%d",&m);
    int a[100];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    int b[100];
    for(int j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(int i=0;i<m;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c>=1)
        {
            c1++;
        }
    }
    if(c1==m && c1==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}