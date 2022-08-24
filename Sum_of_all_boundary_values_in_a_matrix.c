#include<stdio.h>
int main()
{
    int m,n,a[100][100],i,j,s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((i==0)||(i==n-1)||(j==0)||(j==m-1))
            {
                s+=a[i][j];
            }
        }
    }
    printf("%d",s);
}