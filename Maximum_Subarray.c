#include<stdio.h>
#include<limits.h>
int main()
{
    int m,i;
scanf("%d",&m);
int a[m];
for(i=0;i<m;i++)
{
    scanf("%d",&a[i]);
}
    int max=INT_MIN;
    int c=0;
    for(i=0;i<m;i++)
    {
        c+=a[i];
        if(max<c)
        {
            max=c;
        }
        if(c<0)
        {
            c=0;
        }
    }
    printf("%d
",max);
}