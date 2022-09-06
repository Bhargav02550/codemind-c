#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize) {
 int max = 0;
 int sum = 0;
 for (int i=0; i<numsSize; i++)
 {
     sum = (sum+nums[i])*nums[i];
     if(max<sum){max=sum;}
 }
return max;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",findMaxConsecutiveOnes(a,n));
}