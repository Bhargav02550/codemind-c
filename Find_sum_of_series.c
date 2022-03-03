#include<stdio.h>
int main()
{
	int n,i,j;
	float sum=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(1.0/i);
	}
	printf("%.2f",sum);
}