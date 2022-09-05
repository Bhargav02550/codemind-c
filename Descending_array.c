#include<stdio.h>
int main()
{
    int n,i,a[100],k=0;
    scanf("%d",&n);
    int change = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        k++;
        if(a[i]>a[i+1])
        change++;
    }
    if(k==0 && change > 1)
    printf("yes");
    else
    printf("no");
}