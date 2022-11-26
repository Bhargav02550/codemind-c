#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s,c=0;
    scanf("%d",&s);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==s)
            {
             c++;
            }
        }
    }
    if(c==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}