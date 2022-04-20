#include<stdio.h>
int main()
{
    char s[100],i,su=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            su++;
        }
    }
    if(su==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",su);
    }
}