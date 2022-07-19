#include <stdio.h>  
int main()  
{  
    int num,k=0,t;  
    int c=0; 
    scanf("%d",&num);  
    int a[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        k=0,t=a[i];
        while(t)
        {
            t/=10;
            k++;
        }
        if(k%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}