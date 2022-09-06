#include<stdio.h>
int main()
{
    int m,n,k,i,j,c=0;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    int b[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]<=k && b[j]>=k && i==j)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
