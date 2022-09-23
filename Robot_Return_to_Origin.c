#include<stdio.h>
int main()
{
    int x=0,y=0;
    char s[100];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='U')
        {
            x++;
        }
        else if(s[i]=='D')
        {
            x--;
        }
        else if(s[i]=='L')
        {
            y++;
        }
        else if(s[i]=='R')
        {
            y--;
        }
    }
    if(x==0 && y==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}