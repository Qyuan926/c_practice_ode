#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int addDigits(int num){
	int n = num;
	int m = 0;
	int sum = 0;
	while (1)
	{
		while (n>0)
		{
			m = n % 10;
			sum = sum + m;
			n = n / 10;

		}
		if (sum<10)
			return sum;
		else
		{n = sum;
		sum = 0;

		}
			
	}
}
int main()
{
	printf("%d", addDigits(38));
	return 0;
}