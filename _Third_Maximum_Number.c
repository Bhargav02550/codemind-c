#include<stdio.h>
#include<limits.h>
int thirdMax(int* nums, int numsSize)
{
    long max1 = (long)INT_MIN - 1;
    long max2 = (long)INT_MIN - 1;
    long max3 = (long)INT_MIN - 1;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] > max2 && nums[i] < max1) {
            max3 = max2;
            max2 = nums[i];
        }
        else if (nums[i] > max3 && nums[i] < max2) {
            max3 = nums[i];
        }
    }
    return (max3 == (long)INT_MIN - 1) ? max1 : max3;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=thirdMax(a,n);
    printf("%d",c);
}