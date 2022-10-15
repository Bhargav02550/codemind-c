#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=k;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
}