#include<stdio.h>
int main()
{
    int i;
    char s[1000];
    scanf("%[^
]s",s);
    char max=s[0];
    for(i=0;s[i]!=NULL;i++)
    {
        if(max<s[i])
        {
            max=s[i];
        }
    }
    printf("%c",max);
}