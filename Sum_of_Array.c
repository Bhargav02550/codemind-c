#include<stdio.h>
int main()
{
    int n,i,a[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("%d",s);
}