#include<stdio.h>
int main()
{
    int n,r=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s[100];
    for(int i=0;i<int(n/2);i++)
    {
        s[r++]=a[i];
        s[r++]=a[i+int(n/2)];
    }
    for(int i=0;i<r;i++)
    {
        printf("%d ",s[i]);
    }
}