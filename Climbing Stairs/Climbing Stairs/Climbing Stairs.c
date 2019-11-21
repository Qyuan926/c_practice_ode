#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//到n阶楼梯的方法可分为n-1阶楼梯上一阶 n-1阶楼梯向上上两阶。即n-1和n-2之和。
//斐波那契数
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





