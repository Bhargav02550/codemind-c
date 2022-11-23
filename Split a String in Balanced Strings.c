#include<stdio.h>
int main()
{
    char s[100];
    int c=0,d=0;
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='L')
        {
            c++;
        }
        else
        {
            c--;
        }
        if(c==0)
        {
            d++;
        }
    }
    printf("%d",d);
}
