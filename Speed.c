#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        int b[a],c=1;
        for(int i=0;i<a;i++)
        {
            scanf("%d",&b[i]);
        }
        for(int i=0;i<a-1;i++)
        {
            if(b[i]>b[i+1])
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}