#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ȶ�������б�������ǰ������������к�Ϊ sum�����Ϊ ans
	//��� sum > 0����˵�� sum �Խ��������Ч������ sum ���������ϵ�ǰ��������
	////��� sum <= 0����˵�� sum �Խ��������Ч������Ҫ�������� sum ֱ�Ӹ���Ϊ��ǰ��������
	//ÿ�αȽ� sum �� ans�Ĵ�С�������ֵ��Ϊans�������������ؽ��
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
