#include<stdio.h>
#include<string.h>
int main()
{
    int t,len,i;
    scanf("%d",&t);
    while(t--)
    {
        char str[100000];
        int f=0;
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]!=str[len-i-1])
            {
             f=1;
             break;
            }
        }
        if(f==1)
         printf("NO
");
        else if(len%2==0)
         printf("YES EVEN
");
        else
         printf("YES ODD
");
    }
}