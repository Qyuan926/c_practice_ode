#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int Getmonthday(int year, int month)
{
	int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
	{
		monthday[2] = 29;
	}
	return monthday[month];
}
int main()
{

	int m, year, month, day, addday;
	cin >> m;
	while (m--)
	{

		cin >> year >> month >> day >> addday;
		day += addday;
		while (day>Getmonthday(year, month))
		{
			day -= Getmonthday(year, month);
			month += 1;
			if (month == 13)
			{
				month = 1;
				year += 1;
			}

		}
		printf("%04d-%02d-%02d\n", year, month, day);
	}


	return 0;
}