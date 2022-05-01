#include<stdio.h>
int main()
{
    char s[1000];
    int i,c=0,c1=0,e=0;
    scanf("%[^
]s",s);
    for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122)||s[i]==' ' )
          c++;
        else if(s[i]>=48 && s[i]<=57)
         c1++;
        else
         e++;
 
 	}
    printf("%d",e);
}