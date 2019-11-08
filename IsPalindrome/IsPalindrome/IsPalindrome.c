#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPalindrome(int x){
	int  tmp = 0;
	long  y = 0;//int y=0;runtime error: signed integer overflow: 746384741 * 10 cannot be represented in type 'int' 
	int  inital_x = x;
	if (x<0)
	{
		return  0;
	}
	else
	{
		while (x != 0)
		{
			tmp = x % 10;
			x = x / 10;
			y = tmp + y * 10;
		}
		if (inital_x == y)
		{
			return 1;
		}
		else
			return 0;

	}

}
int main()
{
	printf("%d",isPalindrome(121));
	return 0;
}