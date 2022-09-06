#include<stdio.h>
int main()
{
    int n,i,j,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++) 
    {
        for(int j=i+1; j<n; j++)
        {
            int diff = a[j] - a[i];
            if (diff > max)
            {
                max= diff;
            }
        }
    }
    printf("%d",max);
}