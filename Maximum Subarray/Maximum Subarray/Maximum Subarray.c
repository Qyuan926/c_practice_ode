#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//首先对数组进行遍历，当前最大连续子序列和为 sum，结果为 ans
	//如果 sum > 0，则说明 sum 对结果有增益效果，则 sum 保留并加上当前遍历数字
	////如果 sum <= 0，则说明 sum 对结果无增益效果，需要舍弃，则 sum 直接更新为当前遍历数字
	//每次比较 sum 和 ans的大小，将最大值置为ans，遍历结束返回结果
int maxSubArray(int* nums, int numsSize){
	
	int  sum = nums[0];
	int  ans = nums[0];
	for (int i = 1; i<numsSize; ++i)
	{
		if ((sum <= 0) && (sum<nums[i]))
		{
			sum = nums[i];
		}
		else
		{
			sum += nums[i];
		}
		if (sum>ans)
		{
			ans = sum;
		}
	}
	return ans;
}
