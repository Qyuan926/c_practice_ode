#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��n��¥�ݵķ����ɷ�Ϊn-1��¥����һ�� n-1��¥�����������ס���n-1��n-2֮�͡�
//쳲�������
int climbStairs(int n){
	int n1 = 1;
	int n2 = 2;
	if (n == 1)
		return 1;
	for (int i = 3; i <= n; ++i)
	{
		int n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return n2;

}
int main()
{
	printf("%d\n", climbStairs(1));
	printf("%d\n",climbStairs(4));
	printf("%d\n", climbStairs(6));
	printf("%d\n", climbStairs(8));
}





