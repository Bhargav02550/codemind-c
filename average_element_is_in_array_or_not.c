#include<stdio.h>
int binary_search(int *a,int l,int h,int s)
{
	int m;
	if(l>h)
	{
		return 0;
	}
	m=(l+h)/2;
	if(s==a[m])
	{
		return 1;
	}
	if(s>a[m])
	{
		l=m+1;
	}
	else if(s<a[m])
	{
		h=m-1;
	}
	return binary_search(a,l,h,s);
}
int main()
{
	int n,i,x,s=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
	    s+=a[i];
	    x=s/n;
	}
	if(binary_search(a,0,n-1,x))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}