#include<stdio.h>
int main()
{
    int n,i,a[100],s;
    float av;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    av=s/n;
    int c=0;
    for(i=0;i<n;i++)
    {
        if(av<=a[i])
        {
          c++;
        }
    }
    printf("%d",c);
}