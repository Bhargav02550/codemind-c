#include<stdio.h>
int main()
{
	char s[1000];
	int m,n,i;
	scanf("%[^
]s",s);
	scanf("%d%d",&m,&n);
	for(i=m;i<n+1;i++)
	{
		printf("%c",s[i]);
	}
}