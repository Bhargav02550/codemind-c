#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                printf("%d ",j-i);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d ",c);
        }
    }
}