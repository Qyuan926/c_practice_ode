#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int lemonadeChange(int* bills, int billsSize)
{
	if (bills == NULL&&billsSize<0 && billsSize>10000)
		return 0;
	int i = 0;
	int cash5 = 0;
	int cash10 = 0;
	for (i = 0; i<billsSize; ++i)
	{
		if (bills[i] == 5)
		{
			cash5++;
		}
		if (bills[i] == 10)
		{
			if (cash5 <= 0)
			{
				return 0;
			}
			else
			{
				cash5--;
				cash10++;
			}
		}
		if (bills[i] == 20)
		{
			if (!((cash5 >= 1 && cash10 >= 1) || (cash10 == 0 && cash5 >= 3)))//5Ԫ10Ԫ��������һ�Ż���5Ԫ������
				return 0;//5Ԫû��ֱ�ӷ���false  10Ԫû���ж�5Ԫ

			if (cash10>0)
			{
				cash10--;
				cash5--;
			}
			else
			{
				cash5 = cash5 - 3;
			}
			if (cash5<0)
			{
				return 0;
			}

		}
	}
	return 1;
}
int main()
{
	int a[10] = { 5, 5, 5, 5, 10, 5, 10, 10, 10, 20 };
	printf("%d", lemonadeChange(a, 10));
	return 0;

}