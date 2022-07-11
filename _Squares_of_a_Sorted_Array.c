#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int part(int *a,int l,int h)
{
    int p=h,i=l,j=l;
    for(i;i<p;i++)
    {
        if(a[i]<a[p])
        {
            swap(&a[i],&a[j]);
            j++;
        }
    }
    swap(&a[j],&a[p]);
    return j;
}
void qs(int *a,int l,int h)
{
    if(l<h)
    {
    	int p=part(a,l,h);
    	qs(a,0,p-1);
        qs(a,p+1,h);
	}
}
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
    }
    qs(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}