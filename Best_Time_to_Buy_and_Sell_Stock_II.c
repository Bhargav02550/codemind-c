#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i])
        {
            c+=a[i+1]-a[i];
        }
    }
    printf("%d",c);
}