#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*使用两个指针start,tail，如果一个指针start指向的 是查找的数字地址start往后移一个 另一个指针tail不动，如果不是，用*start代替*tail*/
int removeElement(int* nums, int numsSize, int val){
	int *head = nums;
	int *start = nums;
	int *tail = nums;
	while (start<head + numsSize)
	{
		if (*start == val)
		{
			start++;
		}
		else
		{
			*tail = *start;
			start++;
			tail++;
		}

	}
	return tail - head;

}
int main()
{
	int nums[5] = { 3,2,3,5,3 };
	int val = 3;
	int n=removeElement(nums, 5, val);
	printf("%d", n);
	return 0;

}