#include<stdio.h>
int main()
{
    int n,k,c=0,skip=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=k && skip<2)
        {
            c++;
        }
        else
        {
            skip++;
        }
    }
    printf("%d",c);
}