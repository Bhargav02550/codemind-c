#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,j,c1=0,m,c=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
       {
         c1=0;
         for(j=2;j<=sqrt(i);j++)
            {
             if(i%j==0){
                 c1++;
                 break;
             }
        }
        
         if(c1==0 && i!= 1)
             c++;
    }
printf("%d",c);  
}