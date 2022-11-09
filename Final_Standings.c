#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m];
    for(int i=0;i<=m+1;i++)
    {
        a[i]=0;
    }
    a[0]=1;
    a[1]=n-1;
    for(int i=2;i<m+1;i++)
    {
        a[i]=(n-1)*(a[i-1]+a[i-2]);
    }
    printf("%d",a[m]);
}