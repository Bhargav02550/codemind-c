#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]",s);
    int v=0,c=0,d=0,k=0,i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            v++;
        }
        else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            c++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            d++;
        }
        else if(s[i]==' ')
        {
            k++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d
",v,c,d,k);
}