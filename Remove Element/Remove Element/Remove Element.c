#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*ʹ������ָ��start,tail�����һ��ָ��startָ��� �ǲ��ҵ����ֵ�ַstart������һ�� ��һ��ָ��tail������������ǣ���*start����*tail*/
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