#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fun(int x);
//�ж��Ƿ�Ϊ������  �㷨�൱�ڿ���ָ��
//Ϊ������ʱ����ָ��Ϊ1ʱ����ָ��
//��Ϊ������ʱ����ָ�����ָ��һȦ����
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

//�������ã���һ��������λ�õ�ƽ��֮��
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