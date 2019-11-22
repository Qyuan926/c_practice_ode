#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fun(int x);
//判断是否为快乐数  算法相当于快慢指针
//为快乐数时，快指针为1时等慢指针
//不为快乐数时，快指针快满指针一圈结束
int isHappy(int n){
	int n1 = n;
	int n2 = n;
	do
	{
		n1 = Fun(n1);
		n2 = Fun(Fun(n2));
	}while (n1 != n2);
	return n1 == 1;

}

//函数作用，求一个数各个位置的平方之和
int Fun(int x)
{
	int sum = 0;
	while (x != 0)
	{

		sum = sum + (x % 10)*(x % 10);
		x = x / 10;
	}
	return sum;
}
int main()
{
	printf("%d", isHappy(6));
	return 0;
}